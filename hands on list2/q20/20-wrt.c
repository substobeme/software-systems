/*========================================================================================
  ========================================================================================
   Name: 20-wrt.c
   Author: Subha Chakraborty
   Description:20.Write two programs so that both can communicate by FIFO -Use one way communication.
   Date: 22nd September,2024
  =======================================================================================
  =======================================================================================*/
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


int main() {
char *mkf = "pipe1";
if (mkfifo(mkf, 0744)==-1){perror("No pipe");}
 int fd = open("pipe1", O_WRONLY); 
 char buf[1000];  
 scanf("%s", buf);  
 write(fd, buf, sizeof(buf));
 close(fd); 
return 0;
}
/*Output:subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2/q20$ cc 20-wrt.c
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2/q20$ ./a.out
hi_subha_here
 */

