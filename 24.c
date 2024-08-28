/*========================================================================================
  ========================================================================================
   Name: 24.c
   Author: Subha Chakraborty
   Description: Write a program to create an orphan process.
   Date: 29th August,2024
  =======================================================================================
  =======================================================================================*/  


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
if(!fork()){
printf("The Child process with pid %d, has  parent pid %d\n",getpid(),getppid());
sleep(10);
printf("The Child process with pid %d, has  parent pid %d\n",getpid(),getppid());
exit(0);
}
else{
sleep(5);
exit(0);
}}
/*Output

$ ./a.out
The Child process with pid 5498, has  parent pid 5497
The Child process with pid 5498, has  parent pid 1801
*/
