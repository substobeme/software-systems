/* Name: Subha Chakraborty
   Reg No: MT2024156
   Problem Statement: 16. Write a program to perform mandatory locking.

b. Implement read lock
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
struct flock *l= malloc(sizeof(struct flock));
int fd = open("16a",O_RDWR);
l->l_type= F_RDLCK;
l->l_whence= SEEK_SET;
// performing mandatory locking ;
l->l_start= 0;
l->l_len=0;
l->l_pid = getpid();
printf("Entry section of critical section\n");

int check =fcntl(fd,F_SETLKW,l);
if(check== -1){printf("Failed to lock\n");}
else{printf("Locked successfully\n");}
printf("The critical section\n");
printf("Enter 1  to exit critical section\n");
int val=0;
scanf("%d",&val);
if(val==1){ l->l_type = F_UNLCK; }
fcntl(fd,F_SETLKW,l);
printf("The Exit section\n");
free(l);

}
