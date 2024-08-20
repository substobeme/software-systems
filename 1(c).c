/* Name: Subha Chakraborty
Reg No: MT2024156
Problem Statement: 1. Create the following types of a files using (i) shell command (ii) system call
c. FIFO (mkfifo Library Function or mknod system call
*/

#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(){
mknod("pipe_1.c",S_IFIFO|0744,0);
perror("ERROR OCCURED");
}
