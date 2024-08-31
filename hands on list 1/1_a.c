/*========================================================================================
  ========================================================================================
   Name: 1_a.c
   Author: Subha Chakraborty
   Description:Create the following types of a files using
   a. soft link (symlink system call)
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/ 

#include<stdio.h>
#include<unistd.h>

int main(int c, char *argv[]){

int check= symlink(argv[1],argv[2]);
if(check== -1){printf("failed to create softlink");
}
}
/*Terminal:$./a.out file3 sflink1
           $ls -l
 Output:  
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     1 Aug 24 09:19  sflink1 -> file3 */
