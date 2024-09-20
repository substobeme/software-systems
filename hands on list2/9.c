                                                                                        
/*========================================================================================
  ========================================================================================
   Name: 9.c
   Author: Subha Chakraborty
   Description:9. Write a program to ignore a SIGINT signal then reset the default action of the SIGINT
    signal - Use signal system call.
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void hndl(int sig) {
printf("\nSIGINT is ignored\n");
}

void reset() {
signal(SIGINT, SIG_DFL);
printf("SIGINT reset to default.Now terminate\n");
}

int main() {
signal(SIGINT, hndl);
getchar();
reset();
sleep(10);
return 0;
}

/*Output:
^C
SIGINT is ignored
^C
SIGINT is ignored
^C
SIGINT is ignored
^C
SIGINT is ignored
^C
SIGINT is ignored

SIGINT reset to default.Now terminate
^C

*/
