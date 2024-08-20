/* Name : Subha Chakraborty
Reg No: MT2024156
Problem Statement: 1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call) */


#include<stdio.h>
#include<unistd.h>

int main(void){
int catch= symlink("file3","softie3");
if(catch== -1){printf("failed to create");
}
}
