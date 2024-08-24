/* Name : Subha Chakraborty
Reg No: MT2024156
Problem Statement: 1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call) */


#include<stdio.h>
#include<unistd.h>

int main(int c, char *argv[]){

int check= symlink(argv[1],argv[2]);
if(check== -1){printf("failed to create softlink");
}
}
/*Terminal:./a.out file3 sflink1
 
 Output:  
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     1 Aug 24 09:19  sflink1 -> file3 */
