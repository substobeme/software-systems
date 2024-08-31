/*========================================================================================
  ========================================================================================
   Name: 13.c
   Author: Subha Chakraborty
   Description:Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
   verify whether the data is available within 10 seconds or not (check in $man 2 select).
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/time.h>
#include<sys/types.h>
#include<string.h>

int main(){
int off =0;
char buffer[200];
fd_set rfds;
FD_ZERO(&rfds);
FD_SET(0,&rfds);
struct timeval t;
t.tv_sec = 10; //10 secs
t.tv_usec=0;
printf("Enter in  10 secs \n");
int ret = select(1,&rfds,0,0,&t);
if(ret &&  FD_ISSET(0,&rfds)){
 off= read(0,buffer,sizeof(buffer));
}
else{
printf("Sorry timedout");
exit(-1);
}
for(int i=0;i<off;i++) printf("%c",buffer[i]);
printf("The data was available within 10 secs");
}
/* Output: $ ./a.out
Enter in  10 secs 
hi
hi
The data was available within 10 secs
$./a.out
Enter in  10 secs 
Sorry timedout */
