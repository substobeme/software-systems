/*========================================================================================
  ========================================================================================
   Name: 17a.c
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
#include <sys/wait.h>
#include<stdlib.h>
int main() {
int fd[2];
pipe(fd);
if (!fork()) {
dup2(fd[1], STDOUT_FILENO);
close(fd[0]);
close(fd[1]);
execlp("ls", "ls", "-l", NULL);
}
if(!fork()) {
dup2(fd[0], STDIN_FILENO);
close(fd[1]);
close(fd[0]);
execlp("wc", "wc", NULL);
}
close(fd[0]);
close(fd[1]);
wait(0);
wait(0);
return 0;
}
/* Output:    28     245    1985
*/
