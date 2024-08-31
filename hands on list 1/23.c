/*========================================================================================
  ========================================================================================
   Name: 23.c
   Author: Subha Chakraborty
   Description: 23. Write a program to create a Zombie state of the running program.
   Date: 29th August,2024
  =======================================================================================
  =======================================================================================*/  

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
if(!fork()){
printf("The Child process with pid %d and parent pid %d is starting to run\n",getpid(),getppid());
printf("The Child process with pid %d and parent pid %d is done running \n",getpid(),getppid());
exit(0);
}
else{
printf("The process with pid %d  is starting to run\n",getpid());
sleep(50);
printf("The process with pid %d  is terminated\n",getpid());
exit(0);
}
}
/* Output:
  Terminal 1                                                                           Terminal 2
  $./a.out                                                                           $ps aux|grep Z
The process with pid 4916  is starting to run
The Child process with pid 4917 and parent pid 4916 is starting to run    |
The Child process with pid 4917 and parent pid 4916 is done running       |    subha-c+    4917  0.0  0.0      0     0 pts/0    Z+   01:28   0:00 [a.out] <defunct>

The process with pid 4916  is terminated
 
*/
