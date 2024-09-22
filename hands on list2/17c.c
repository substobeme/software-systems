/*========================================================================================
  ========================================================================================
   Name: 17c.c
   Author: Subha Chakraborty
   Description:17. Write a program to execute ls -l | wc.
   a. use dup
   b. use dup2
   c. use fcntl
   Date: 21st September,2024
  =======================================================================================
  =======================================================================================*/

#include <stdio.h>    
#include <unistd.h>   
#include <fcntl.h>    
#include <sys/wait.h> 

int main() {
int fd[2];             
pipe(fd);               
if(!fork()) {              
close(1);           
close(fd[0]);       
fcntl(fd[1], F_DUPFD, 1);   
execlp("ls", "ls", "-l", NULL); 
    } 
    29     254    2059
else { 
close(0);           
close(fd[1]);       
fcntl(fd[0], F_DUPFD, 0);  
execlp("wc", "wc", NULL);  
    }

    return 0;
}
/*Output:    29     254    2059
 */
