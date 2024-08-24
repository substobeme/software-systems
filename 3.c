/*Name : Subha Chakraborty
Reg No: MT2024156
Problem Statement: 3. Write a program to create a file and print the file descriptor value. Use creat ( ) system call */


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
