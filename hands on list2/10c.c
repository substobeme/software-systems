/*========================================================================================
  ========================================================================================
   Name: 10c.c
   Author: Subha Chakraborty
   Description:10. Write a separate program using sigaction system call to catch the following signals.
   c. SIGFPE
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void hndl(int sig) {
static int i=0;
printf("Caught Floating point exception\n");
exit(1);
}

int main() {
struct sigaction *s=malloc(sizeof(struct sigaction));
s->sa_handler = hndl;
sigemptyset(&s->sa_mask);
s->sa_flags = 0;
sigaction(SIGFPE, s, NULL);
int a=3,b=0;
int c= a/b;
}
/*Output: 
Caught Floating point exception
*/
