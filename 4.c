/*Name : Subha Chakraborty
Reg No: MT2024156
Problem Statement: 4. Write a program to open an existing file with read write mode. Try O_EXCL flag also. */


#include<stdio.h>
#include<fcntl.h>

int main(){
int fd1 = open("filenow1",O_CREAT|O_EXCL,0744);

printf("fd1= %d\n", fd1);
int fd2 = open("filenow1",O_CREAT|O_RDWR,0744);
printf("fd2=%d\n" , fd2);
}
