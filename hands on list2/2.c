/*========================================================================================
  ========================================================================================
   Name: 2.c
   Author: Subha Chakraborty
   Description:2.Write a program to print the system resource limits. Use getrlimit system call.
   Date: 17th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>

int main() {
struct rlimit *rl=malloc(sizeof(struct rlimit));
if(getrlimit(RLIMIT_AS,rl)> -1) {printf("Maximum size of Virtual Memory : soft limit: %lu, hard limit: %lu\n", rl->rlim_cur, rl->rlim_max);} 
else {perror("Failed for file descriptor");}
if(getrlimit(RLIMIT_CPU,rl) > -1) {printf("Maximum CPU time: soft limit: %lu, hard limit: %lu\n", rl->rlim_cur, rl->rlim_max);} 
else {perror("Failed for CPU time");}
if(getrlimit(RLIMIT_NOFILE,rl) >-1) {printf("Maximum number of file descriptors: soft limit: %lu, hard limit: %lu\n", rl->rlim_cur, rl->rlim_max);} 
else {perror("Failed for file descriptors");}
return 0;
}
/* Output:
Maximum size of Virtual Memory : soft limit: 18446744073709551615, hard limit: 18446744073709551615
Maximum CPU time: soft limit: 18446744073709551615, hard limit: 18446744073709551615
Maximum number of file descriptors: soft limit: 1024, hard limit: 1048576
 */
