/*Name : Subha Chakraborty
Reg No: MT2024156
Problem Statement: 3. Write a program to create a file and print the file descriptor value. Use creat ( ) system call */


#include<stdio.h>
#include<fcntl.h>
int main(){
int fd1;
fd1 = creat("file for 3",00744);
perror("error occured plz check");
printf("%d\n",fd1);
}
