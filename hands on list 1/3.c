/*========================================================================================
  ========================================================================================
   Name: 3.c
   Author: Subha Chakraborty
   Description:Write a program to create a file and print the file descriptor value. Use creat ( ) system call
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/ 

#include<stdio.h>
#include<fcntl.h>
int main(int c, char* argv[]){
int fd1;
fd1 = creat(argv[1],00744);
if(fd1==-1) printf("Cannot create file\n");
printf("The file descriptor  value is %d\n",fd1);
}
/*Terminal:$ ./a.out newfile
Output: The file descriptor  value is 3

 */
