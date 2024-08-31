/*========================================================================================
  ========================================================================================
   Name: 20.c
   Author: Subha Chakraborty
   Description: Find out the priority of your running program. Modify the priority with nice command.
   Date: 31th August,2024
  =======================================================================================
  =======================================================================================*/ 



#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
int main(){
int old_priority, new_priority;
old_priority=getpriority(PRIO_PROCESS,0);
int x;
printf("Enter the increase in priority you want to give\n");
scanf("%d\n",&x);
new_priority=nice(x);
printf("The old priority of the process is %d\n The new priority of the process is %d\n",old_priority,new_priority);
return 0;

}
/*Output:
$ ./a.out
Enter the increase in priority you want to give
10

The old priority of the process is 0
 The new priority of the process is 10

*/
