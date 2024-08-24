/*Name: Subha Chakraborty
Reg No: MT2024156
Problem statement: 1. Create the following types of a files using (i) shell command (ii) system call
b. hard link (link system call) */


#include<unistd.h>
#include<stdio.h>

int main(){
int catch = link("hrd","hrd2");
if(catch==-1)printf("Failed to link");
}
