
/* Name: Subha Chakraborty
   RegNo: MT2024156
   ProblemStatement:Write a program, call fork and print the parent and child process id.*/



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
char* s="parent";

if(!fork()) s="child";
printf("The pid of %s is %d\n",s,getpid());
}

/* Output : The pid of parent is 5927
The pid of child is 5928
*/
