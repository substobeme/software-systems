/*========================================================================================
  ========================================================================================
   Name: 3.c
   Author: Subha Chakraborty
   Description:3. Write a program to set (any one) system resource limit. Use setrlimit system call.
   Date: 17th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
int main(){
struct rlimit *r1=malloc(sizeof(struct rlimit));
struct rlimit *r2=malloc(sizeof(struct rlimit));
if(getrlimit(RLIMIT_NOFILE,r1)>-1){printf("The maximum number of file descriptors  : softlimit %lu, hardlimit %lu\n",r1->rlim_cur,r1->rlim_max);}
else perror("Failed to get value");
r2->rlim_cur=512;
r2->rlim_max= r1->rlim_max;
if(setrlimit(RLIMIT_NOFILE,r2)==-1) perror("Failed to get value"); 
if(getrlimit(RLIMIT_NOFILE,r2)>-1){printf("The maximum number of file descriptors  : softlimit %lu, hardlimit %lu\n",r2->rlim_cur,r2->rlim_max);} 
else perror("Failed to get value");
r2->rlim_cur=r1->rlim_max;  
if(setrlimit(RLIMIT_NOFILE,r2)==-1)perror("Failed to get value");
}
/*Output:
The maximum number of file descriptors  : softlimit 1024, hardlimit 1048576
The maximum number of file descriptors  : softlimit 512, hardlimit 1048576
 */
