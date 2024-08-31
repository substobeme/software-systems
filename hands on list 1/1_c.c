/*========================================================================================
  ========================================================================================
   Name: 1_c.c
   Author: Subha Chakraborty
  Description:Create the following types of a files using
   c. FIFO (mkfifo Library Function or mknod system call)
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/ 

#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(int c,char* argv[]){
int check=mknod(argv[1],S_IFIFO|0666,0);
if(check==-1){printf("Cannot create named pipe\n");}
}
/* Terminal: ./a.out q3_pipe
   Output:prw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 09:31  q3_pipe
 */
