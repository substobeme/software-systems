/*Name: Subha Chakraborty
 RegNo: MT2024156
 Problem statement:Write a program to copy file1 into file2 ($cp file1 file2). */

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc,char *argv[]){
char buffer[200];
int fd = open(argv[1],O_RDONLY,0400);
if(fd==-1) perror("file not opened");
int ret;
int fd2 =open(argv[2],O_RDWR|O_CREAT|O_EXCL,0600);
if(fd2==-1) perror("file cannot be copied");
while((ret=read(fd,buffer,sizeof(buffer)))>0)
write(fd2,buffer,ret);
close(fd);
close(fd2);
}

