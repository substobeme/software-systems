/*========================================================================================
  ========================================================================================
   Name: 19.c
   Author: Subha Chakraborty
   Description:19. Create a FIFO file by
   a. mknod command
   b. mkfifo command
   c. use strace command to find out, which command (mknod or mkfifo) is better.
   c. mknod system call
   d. mkfifo library function
   Date: 22nd September,2024
  =======================================================================================
  =======================================================================================*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
char *mkf = "fifo";
char *mkn = "pipe_nod";
if (mkfifo(mkf, S_IRWXU)!=-1) {
printf("FIFO created using mkfifo : %s\n", mkf);
}
if (mknod(mkn, S_IFIFO | S_IRWXU, 0)!=-1) {
printf("FIFO created using mknod : %s\n",mkn);
}
return 0;
}
/*output:
FIFO created using mkfifo : fifo
FIFO created using mknod : pipe_nod
$ls -l
prwx------ 1 subha-chakraborty subha-chakraborty     0 Sep 22 13:11 fifo
prwx------ 1 subha-chakraborty subha-chakraborty     0 Sep 22 13:11 pipe_nod
*/
