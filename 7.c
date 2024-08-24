/*Name: Subha Chakraborty
 RegNo: MT2024156
 Problem statement:Write a program to copy file1 into file2 ($cp file1 file2). */

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(int c,char *argv[]){
char buffer[200];
if(c!=3){printf("Wrong number of arguments\n"); exit(-1);}
int fd = open(argv[1],O_RDONLY,0400);
if(fd==-1) printf("file not opened");
int ret;
int fd2 =open(argv[2],O_RDWR|O_CREAT|O_EXCL,0600);
if(fd2==-1) printf("file cannot be copied");
while((ret=read(fd,buffer,sizeof(buffer)))>0)
write(fd2,buffer,ret);

close(fd);
close(fd2);
}

/* Output:
$ ./a.out original copy1
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ cat original
Content of the original
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ cat copy1
Content of the original

*/
