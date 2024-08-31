/*========================================================================================
  ========================================================================================
   Name: 21.c
   Author: Subha Chakraborty
   Description: Write a program, call fork and print the parent and child process id.
   Date: 27th August,2024
  =======================================================================================
  =======================================================================================*/ 



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
