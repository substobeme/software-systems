/*========================================================================================
  ========================================================================================
   Name: 21b.c
   Author: Subha Chakraborty
   Description: 21. Write two programs so that both can communicate by FIFO - Use two way communication.
   Date: 22nd September, 2024
  =======================================================================================
  =======================================================================================*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main()
{char buf[1000];
 int fd = open("p1",O_RDONLY);
 int fd2 = open("p2",O_WRONLY);
 int sz = read(fd,buf,sizeof(buf));
 printf("Received data \n ");
 write(1,buf,sz);
 printf("Sending the data\n");
 write(fd2,"Hi Subha here\n",14);
}

/*Output:
list1/hands on list2/q21$ ./2
Received data 
Hello Subha
Sending the data
*/

