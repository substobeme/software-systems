/*========================================================================================
  ========================================================================================
   Name: 11.c
   Author: Subha Chakraborty
   Description:Write a program to open a file, duplicate the file descriptor and append the file with both the
   descriptors and check whether the file is updated properly or not.
   a. use dup
   b. use dup2
   c. use fcntl
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(int c, char*  argv[]){
if(c!=2){ printf("Wrong number of arguments \n"); exit(-1);}
int fd1= open(argv[1],O_CREAT|O_RDWR|O_APPEND,0744);
int fd2= dup(fd1);
int fd3 =dup2(fd1,32);
int fd4=  fcntl(fd1,F_DUPFD);
char buffer[200];
int r=snprintf(buffer, sizeof(buffer), "The file descriptors of original is %d  a) dup is  %d\n",fd1, fd2);
write(fd1,buffer,r);
int r2=snprintf(buffer, sizeof(buffer), "The file descriptors of original is %d  b) dup2 is  %d\n",fd1, fd3);
write(fd1,buffer,r2);
int r3=snprintf(buffer, sizeof(buffer), "The file descriptors of original is %d  c)fcntl is  %d\n",fd1, fd4);
write(fd1,buffer,r3);
close(fd1);
close(fd2);
close(fd3);
}
/* Output:subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ ./a.out file
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ cat file
The file descriptors of original is 3  a) dup is  4
The file descriptors of original is 3  b) dup2 is  32
The file descriptors of original is 3  c)fcntl is  5
 */
