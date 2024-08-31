/*========================================================================================
  ========================================================================================
   Name: 18a.c
   Author: Subha Chakraborty
   Description: Write a program to perform Record locking.
                a. Implement write lock
                Create three records in a file. Whenever you access a particular record, first lock it then modify/access
                to avoid race condition.
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/ 



#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

struct count {
    int num;
};

int main() {
    struct count c[3];
    int strt;
    
    printf("Which record needed 0th, 1st, or 2nd?\n");
    scanf("%d", &strt);
    
    
    
    struct flock* l=malloc(sizeof(struct count));
    l->l_type = F_WRLCK;
    l->l_whence = SEEK_SET;
    l->l_start = strt * sizeof(struct count);
    l->l_len = sizeof(struct count);
    l->l_pid = getpid();
    
    int fd = open("Database", O_RDWR,0744);
    if (fd == -1) {
        printf("Couldn't open database");
        exit(-1);
    }

    lseek(fd, strt * sizeof(struct count), SEEK_SET);
    
    printf("Waiting to access critical section\n");
    if (fcntl(fd, F_SETLKW, l) == -1) {
        printf("Locking unsuccessful");
        close(fd);
        exit(-1);
    }
    
    printf("Locked successfully and entered critical section\n");
    
    read(fd, &c[strt], sizeof(struct count)); 
    
    printf("The current count of c[%d] is %d\n", strt, c[strt].num);
    
    printf("Increase count by pressing 1\n");
    int val;
    scanf("%d", &val);
    
    if (val == 1) {
        c[strt].num++;
        lseek(fd, strt * sizeof(struct count), SEEK_SET);
        
        write(fd, &c[strt], sizeof(struct count));
        
        printf("The new count is %d\n", c[strt].num);
        l->l_type= F_UNLCK;
    }
    
    
    
    fcntl(fd, F_SETLK, l);
    
    close(fd);
    free(l);
    return 0;
}

