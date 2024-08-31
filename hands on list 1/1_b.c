/*========================================================================================
  ========================================================================================
   Name: 1_b.c
   Author: Subha Chakraborty
   Description:Create the following types of a files using
   b. hard link (link system call)
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/ 


#include<unistd.h>
#include<stdio.h>

int main(int c, char* argv[]){
int check = link(argv[1],argv[2]);
if(check==-1)printf("Failed to link");
}
/* Terminal: ./a.out hrd1 hrd2
   Output:6179067 -rw-rw-r-- 2 subha-chakraborty subha-chakraborty     0 Aug 24 09:22  hrd1
6179067 -rw-rw-r-- 2 subha-chakraborty subha-chakraborty     0 Aug 24 09:22  hrd2 
*/
