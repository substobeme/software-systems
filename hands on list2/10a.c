/*========================================================================================
  ========================================================================================
   Name: 10a.c
   Author: Subha Chakraborty
   Description:10. Write a separate program using sigaction system call to catch the following signals.
   a. SIGSEGV
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void hndl(int sig) {
printf("Segmentation fault caught\n");
exit(1);
}

int main() {
struct sigaction *s=malloc(sizeof(struct sigaction));
s->sa_handler = hndl;
sigemptyset(&s->sa_mask);
s->sa_flags = 0;
sigaction(SIGSEGV, s, NULL);
int *p=NULL;
printf("%d",*p);  
return 0;
}
/*Output:
Segmentation fault caught
 */
