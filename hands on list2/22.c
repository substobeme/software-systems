/*========================================================================================
  ========================================================================================
   Name: 22.c
   Author: Subha Chakraborty
   Description: 22. Write a program to wait for data to be written into FIFO within 10 seconds, use select
   system call with FIFO.
   Date: 22nd September, 2024
  =======================================================================================
  =======================================================================================*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/select.h>
#include<stdlib.h>
int main() {
int fd;
char buff[1000];
fd_set fd2;
struct timeval t;
fd = open("pipe22", O_RDONLY | O_NONBLOCK);
if (fd < 0) {
perror("Error opening pipe22");
exit(1);
}
FD_ZERO(&fd2);
FD_SET(fd, &fd2);
t.tv_sec = 10;
t.tv_usec = 0;
int res = select(fd + 1, &fd2, NULL, NULL, &t);
if (res < 0) {
perror("Error in select");
close(fd);
exit(1);} 
else if (res == 0) {
printf("Oops missed deadline\n");} 
else {
if (FD_ISSET(fd, &fd2)) {
int sz = read(fd, buff, sizeof(buff) - 1);
if (sz > 0) {
buff[sz] = '\0';
printf("Data received within 10s: %s\n", buff);}}}
close(fd);
return 0;
}

/*Output:subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ cc 22.c
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ./a.out
Data received within 10s: Hi subha

subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ cc 22.c
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ./a.out
Oops missed deadline
*/
