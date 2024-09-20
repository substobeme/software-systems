/*========================================================================================
  ========================================================================================
   Name: 13_s.c
   Author: Subha Chakraborty
   Description:13. Write two programs: first program is waiting to catch SIGSTOP signal, the second program
   will send the signal (using kill system call). Find out whether the first program is able to catch
   the signal or not.
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<signal.h>
int main() {
printf("Enter the pid of the process to stop: ");
int pid;
scanf("%d", &pid);
kill(pid, SIGSTOP);
printf("Sent SIGSTOP to process PID: %d\n", pid);
return 0;
}
/*Output:
Enter the pid of the process to stop: 12969
Sent SIGSTOP to process PID: 12969
*/
