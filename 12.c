/*Name: Subha Chakraborty
Reg no: MT2024156
Problem Statement: 12. Write a program to find out the opening mode of a file. Use fcntl. */


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(int c, char *argv[]){
if(c!=3) { printf("Wrong Number of arguments\n"); exit(-1);}
int fd;

switch(*argv[2]-'0'){
case 0:
fd= open(argv[1],O_CREAT|O_RDONLY,0444);
break;
case 1:
fd = open(argv[1],O_CREAT|O_WRONLY,0222);
break;
case 2:
fd= open(argv[1],O_CREAT|O_RDWR,0666);
break;
default:
fd = -1;
break;
}
if(fd==-1) { printf("Failed to open file\n"); exit(-1);}
int f1= fcntl(fd,F_GETFL);

if((f1 & 3) == O_RDONLY){printf("The access mode is O_RDONLY\n");}
else if((f1 & 3) == O_RDWR) { printf("The access mode is O_RDWR\n");}
else if((f1 & 3) == O_WRONLY) { printf("The access mode is O_WRONLY\n"); }

close(fd);
}

/* Output:$ ./a.out file 1
The access mode is O_WRONLY

   */
