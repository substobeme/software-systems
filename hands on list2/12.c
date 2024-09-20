/*========================================================================================
  ========================================================================================
   Name: 12.c
   Author: Subha Chakraborty
   Description:12. Write a program to create an orphan process. Use kill system call to send SIGKILL signal to
   the parent process from the child process.
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <wait.h>  
int main(){
if(!fork()){
printf("The Child process with pid %d, has  parent pid %d\n",getpid(),getppid());
kill(getppid(),SIGKILL);
sleep(10);
printf("The Child process with pid %d, has  parent pid %d\n",getpid(),getppid());
exit(0);
}
else{
sleep(5);
wait(NULL);
}}
/*Output:
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ./a.out
The Child process with pid 12714, has  parent pid 12713
Killed
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ The Child process with pid 12714, has  parent pid 1803
*/
