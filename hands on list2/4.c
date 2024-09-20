/*========================================================================================
  ========================================================================================
   Name: 4.c
   Author: Subha Chakraborty
   Description:4. Write a program to measure how much time is taken to execute 100 getppid ( )
   system call. Use time stamp counter.
   Date: 18th September,2024
  =======================================================================================
  =======================================================================================*/ 
 

#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdint.h>
unsigned long long rdtsc(){
unsigned long long lo,hi;
__asm__ __volatile__(
"rdtsc":"=a"(lo),"=d"(hi));

return ((long long)hi<<32)|lo;
}

int main(){
unsigned long long start,end;
start=rdtsc();
for(int i=0;i<100;i++){
int pid= getpid();
}
end= rdtsc();
int span=end-start;
//lscpu
int max1= 4400000;
int min1= 400000;
int avg=(max1+min1)/2;
double timespan=(double)span/avg;
printf("The time taken to get 100 pids is %lf milliseconds\n",timespan);
return 0;
}
/*Output:
The time taken to get 100 pids is 0.031157 milliseconds
 */
