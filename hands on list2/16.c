/*========================================================================================
  ========================================================================================
   Name: 16.c
   Author: Subha Chakraborty
   Description:16. Write a program to send and receive data from parent to child vice versa. Use two way
   communication.
   Date: 21st September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
int fd1[2], fd2[2];
char buf[4000];
if (pipe(fd1) == -1 || pipe(fd2) == -1) {
perror("pipe not created\n");
exit(1);}
if(!fork()) {
close(fd1[1]);
close(fd2[0]);
read(fd1[0], buf, sizeof(buf));
printf("Read by child: %s\n", buf);
snprintf(buf, sizeof(buf), "Acknowledgment from child");
write(fd2[1], buf, strlen(buf) + 1);
close(fd1[0]);
close(fd2[1]);
}
else 
{
close(fd1[0]);
close(fd2[1]);
char s[4000];
printf("Enter any  message: ");
scanf("%s", s);
write(fd1[1], s, strlen(s) + 1);
read(fd2[0], buf, sizeof(buf));
printf("Read by parent: %s\n", buf);
close(fd1[1]);
close(fd2[0]);}
return 0;
}
/*Output:
Enter any  message: Hi_Subha_here
Read by child: Hi_Subha_here
Read by parent: Acknowledgment from child

*/  
