/*========================================================================================
  ========================================================================================
   Name: 11.c
   Author: Subha Chakraborty
   Description:11. Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal -
   use sigaction system call.
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void hndl(int sig) {
printf("\nCaught SIGINT\n");
}
void reset(){
struct sigaction *s= malloc(sizeof(struct sigaction));
s->sa_handler=SIG_DFL;
sigemptyset(&s->sa_mask);
s->sa_flags=0;
sigaction(SIGINT,s,NULL);
printf("Now terminate\n");

}
int main() {
struct sigaction *s=malloc(sizeof(struct sigaction));
s->sa_handler = hndl;
sigemptyset(&s->sa_mask);
s->sa_flags = 0;
sigaction(SIGINT, s, NULL);
sleep(10);
getchar();
reset();
sleep(10);
}
/* Output:
^C
Caught SIGINT
^C
Caught SIGINT
Now terminate
^C
 */
