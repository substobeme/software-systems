/*========================================================================================
  ========================================================================================
   Name: 8d.c
   Author: Subha Chakraborty
   Description:8. Write a separate program using signal system call to catch the following signals.
a. SIGSEGV
b. SIGINT
c. SIGFPE
d. SIGALRM (use alarm system call)
e. SIGALRM (use setitimer system call)
f. SIGVTALRM (use setitimer system call)
g. SIGPROF (use setitimer system call)
   Date: 19th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
void hndlr(int sig)
{printf("SIGALRM caught\n");
exit(0);
}

int main()
{
signal(SIGALRM,hndlr);      
alarm(10);
while(1){}
}
/*Output:subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ./a.out
SIGALRM caught
 */
