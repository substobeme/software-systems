/*========================================================================================
  ========================================================================================
   Name: 13_r.c
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

void hndl(int sig) {
printf("Received SIGSTOP signal: %d\n", sig);
}

int main() {
signal(SIGSTOP, hndl);
printf("Process pid is: %d\n", getpid());
printf("Waiting...\n");
while (1);
}
/* Output:
Process pid is: 12969
Waiting...

[1]+  Stopped                 ./r
*/
