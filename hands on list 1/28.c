/*========================================================================================
  ========================================================================================
   Name: 28.c
   Author: Subha Chakraborty
   Description:Write a program to get maximum and minimum real time priority.
   Date: 30th August,2024
  =======================================================================================
  =======================================================================================*/ 


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sched.h>
int main(){
printf("The maximum real time priority %d\n:",sched_get_priority_max(SCHED_RR));
printf("The minimum real time priority %d\n:",sched_get_priority_min(SCHED_RR));
}
/*Output:
The maximum real time priority 99
:The minimum real time priority 1


*/
