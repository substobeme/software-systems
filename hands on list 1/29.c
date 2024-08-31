/*========================================================================================
  ========================================================================================
   Name: 29.c
   Author: Subha Chakraborty
   Description:Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
   SCHED_RR).
   Date: 30th August,2024
  =======================================================================================
  =======================================================================================*/ 


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sched.h>
void policy(int pol){
switch(pol){
case 0:
printf("The current scheduling policy is SCHED_RR\n");
break;
case 1:
printf("The current scheduling policy is SCHED_FIFO\n");
break;
default:
printf("Not Concerned\n");
break;
}
}
int main(){
int new_policy;
int sched_policy= sched_getscheduler(0);
policy(sched_policy);

printf("Choose your scheduling policy 1)SCHED_FIFO, 2)SCHED_RR\n");
scanf("%d",&new_policy);
struct sched_param* s = malloc(sizeof(struct sched_param));
s->sched_priority=10;
switch(new_policy){
case 1:
sched_setscheduler(0,SCHED_FIFO,s);
break;
case 2:
sched_setscheduler(0,SCHED_RR,s);
break;
default:
printf("ERROR\n");
break;
}
sched_policy= sched_getscheduler(0);
policy(sched_policy);
}
/*Output:
$ sudo ./a.out
The current scheduling policy is SCHED_RR
Choose your scheduling policy 1)SCHED_FIFO, 2)SCHED_RR
1
The current scheduling policy is SCHED_FIFO
 */
