/*========================================================================================
  ========================================================================================
   Name: 1b.c
   Author: Subha Chakraborty
   Description:1. Write a separate program (for each time domain) to set a interval timer in 10sec and
   10micro second
   b.ITIMER_VIRTUAL 
   Date: 17th September,2024
  =======================================================================================
  =======================================================================================*/ 


#include<stdlib.h>
#include<sys/time.h>
#include<signal.h>
#include<unistd.h>
#include<stdio.h>
static int i=0;
void sgnlhndl(){
i++;
printf("My timer has expired for  %d time\n",i);
}

int main(){
struct itimerval *t=malloc(sizeof(struct itimerval));
t->it_interval.tv_sec=1;
t->it_interval.tv_usec=10;
t->it_value.tv_sec=1;
t->it_value.tv_usec=10;
int ret = setitimer(ITIMER_VIRTUAL,t,NULL);
perror("");
while(1){
signal(26,sgnlhndl);

}
}
/* Output: Success
My timer has expired for  1 time
My timer has expired for  2 time
My timer has expired for  3 time
My timer has expired for  4 time
My timer has expired for  5 time
My timer has expired for  6 time
My timer has expired for  7 time
My timer has expired for  8 time
My timer has expired for  9 time
My timer has expired for  10 time
My timer has expired for  11 time
My timer has expired for  12 time
 */
