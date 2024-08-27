/* Name: Subha Chakraborty
'  RegNo: MT2024156
   ProblemStatement: 19. Write a program to find out time taken to execute getpid system call. Use time stamp counter. */



#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdint.h>

uint64_t rdtsc(){
unsigned int  lo,hi;
__asm__ __volatile__( 
"rdtsc": "=a" (lo), "=d"(hi));
return ((uint64_t)hi<<32)|lo;}

int main(){
uint64_t start,end;
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
/* Output:The time taken to get pid 3205 is 0.004650 milliseconds


*/
