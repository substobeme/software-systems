/* Name: Subha Chakraborty
Reg No: MT2024156
Problem Statement: 1. Create the following types of a files using (i) shell command (ii) system call
c. FIFO (mkfifo Library Function or mknod system call
*/

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
