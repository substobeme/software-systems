/*========================================================================================
  ========================================================================================
   Name: 19.c
   Author: Subha Chakraborty
   Description:Write a program to find out time taken to execute getpid system call. Use time stamp counter.
   Date: 27th August,2024
  =======================================================================================
  =======================================================================================*/



#include<stdio.h>
#include<unistd.h>
#include<time.h>


unsigned long long  rdtsc(){
unsigned long long  lo,hi;
__asm__ __volatile__( 
"rdtsc": "=a" (lo), "=d"(hi));
return ((long long)hi<<32)|lo;}

int main(){
unsigned long long  start,end;
start = rdtsc();
int pid= getpid();
end =rdtsc();
int span = end-start;
//lscpu
int  max1= 4400000;
int  min1=400000;
int  avg = (max1+min1)/2;
double timespan=( double)span/avg; 
printf("The time taken to get pid %d is %lf milliseconds\n",pid,timespan);
return 0;
} 
/* Output:The time taken to get pid 5400 is 0.005126 milliseconds
*/
