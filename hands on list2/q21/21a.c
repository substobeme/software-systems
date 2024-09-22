/*========================================================================================
  ========================================================================================
   Name: 21a.c
   Author: Subha Chakraborty
   Description: 21. Write two programs so that both can communicate by FIFO - Use two way communication.
   Date: 22nd September, 2024
  =======================================================================================
  =======================================================================================*/


#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{char buf[1000];
 int fd = open("p1",O_WRONLY);
 int fd2 = open("p2",O_RDONLY);
 printf("Sending data\n");
 write(fd,"Hello Subha\n",12);
 int sz = read(fd2,buf,sizeof(buf));
 printf("Received\n");
 write(1,buf,sz);
 return 0;
}


/*Output:
t1/hands on list2/q21$ ./1
Sending data
Received
Hi Subha here
*/
