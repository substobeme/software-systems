/*========================================================================================
  ========================================================================================
   Name: 5.c
   Author: Subha Chakraborty
   Description:5. Write a program to print the system limitation of
   a. maximum length of the arguments to the exec family of functions.
   b. maximum number of simultaneous process per user id.
   c. number of clock ticks (jiffy) per second.
   d. maximum number of open files
   e. size of a page
   f. total number of pages in the physical memory
   g. number of currently available pages in the physical memory.
   Date: 18th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include <stdio.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include<stdlib.h>
int main() {
long elen = sysconf(_SC_ARG_MAX);
printf("Maximum length of the arguments to the exec family: %ld bytes\n", elen);
long mp = sysconf(_SC_CHILD_MAX);
printf("Maximum number of simultaneous processes per user id: %ld\n", mp);
long clk = sysconf(_SC_CLK_TCK);
printf("Number of clock ticks (jiffy) per second: %ld\n", clk);
long mf = sysconf(_SC_OPEN_MAX);
printf("Maximum number of open files: %ld\n", mf);
long pgz = sysconf(_SC_PAGESIZE);
printf("Size of a page: %ld bytes\n", pgz);
long pgs = sysconf(_SC_PHYS_PAGES);
printf("Total number of pages in physical memory: %ld\n", pgs);
long apg= sysconf(_SC_AVPHYS_PAGES);
printf("Number of currently available pages in physical memory: %ld\n", apg);
return 0;
}
/*Output:
Maximum length of the arguments to the exec family: 2097152 bytes
Maximum number of simultaneous processes per user id: 29922
Number of clock ticks (jiffy) per second: 100
Maximum number of open files: 1024
Size of a page: 4096 bytes
Total number of pages in physical memory: 1933791
Number of currently available pages in physical memory: 670903
 */
