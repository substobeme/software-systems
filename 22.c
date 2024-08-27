/* Name: Subha Chakraborty
   RegNo: MT2024156
   ProblemStatement: Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file.*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int c,char* argv[]){
int fd = open(argv[1],O_RDWR|O_CREAT,0700);


char* s = " PARENT ";
if(!fork()) s= " CHILD ";
write(fd, s,sizeof(s));
close(fd);
}
/* Output:
  $ ./a.out file22.txt
  $  cat file22.txt
   
   PARENT  CHILD 

*/
