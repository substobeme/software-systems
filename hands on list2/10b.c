/*========================================================================================
  ========================================================================================
   Name: 10b.c
   Author: Subha Chakraborty
   Description:10. Write a separate program using sigaction system call to catch the following signals.
   b. SIGINT
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void hndl(int sig) {
static int i=0;
printf("\nCaught SIGINT\n");
i++;
if(i==3){
exit(1);}
}

int main() {
struct sigaction *s=malloc(sizeof(struct sigaction));
s->sa_handler = hndl;
sigemptyset(&s->sa_mask);
s->sa_flags = 0;
sigaction(SIGINT, s, NULL);
while(1){
}
}
/*Output:
^C
Caught SIGINT
^C
Caught SIGINT
^C
Caught SIGINT
	
 */
