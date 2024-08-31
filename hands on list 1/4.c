/*========================================================================================
  ========================================================================================
   Name: 4.c
   Author: Subha Chakraborty
   Description:Write a program to open an existing file with read write mode. Try O_EXCL flag also.
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/


#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main(int c, char *argv[]){
int fd1 = open(argv[1],O_CREAT|O_RDWR,0744);
if(fd1==-1){printf("The file %s couldn't be opened in read write mode\n",argv[1]);}
if(fd1!=-1) {printf("The file %s has been opened\n ",argv[1]);}
printf("The file descriptor value is  %d\n",fd1);
int fd2 = open("filenow1",O_CREAT|O_EXCL,0744);
if(fd2==-1){printf("The file %s already exists so cannot be opened with O_EXCL flag\n",argv[2]);}
if(fd2!=-1){printf("The file %s has been opened\n", argv[2]);}
printf("The file descriptor value is %d\n",fd2);
}
/* Terminal:./a.out file1 file2
   Output:
The file file1 has been opened
The file descriptor value is  3
The file file1 already exists so cannot be opened with O_EXCL flag
The file descriptor value is -1
*/
