/*========================================================================================
  ========================================================================================
   Name: 23.c
   Author: Subha Chakraborty
   Description: 23. Write a program to print the maximum number of files can be opened within a process and
   size of a pipe (circular buffer).
   Date: 22nd September, 2024
  =======================================================================================
  =======================================================================================*/
#include <unistd.h>
#include <stdio.h>

int main() {
long int pz=pathconf(".",_PC_PIPE_BUF);
long int mnf=sysconf(_SC_OPEN_MAX);
printf("\nMax size of pipe's circular buffer : %ld",pz);
printf("\nMax number of files that can be opened : %ld\n",mnf);
return 0;
}
/*Output:
Max size of pipe's circular buffer : 4096
Max number of files that can be opened : 1024 */
