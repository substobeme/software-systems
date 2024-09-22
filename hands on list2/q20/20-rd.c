/*========================================================================================
  ========================================================================================
   Name: 20-rd.c
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
    int fd = open("pipe1", O_RDONLY);
    char buf[1000];

    read(fd, buf, sizeof(buf));
    printf("Received: %s\n", buf); 
    close(fd);
    return 0;
}
/*Output:
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2/q20$ cc 20-rd.c
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2/q20$ ./a.out
Received: hi_subha_here
*/
