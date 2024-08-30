
/*========================================================================================
  ========================================================================================
   Name: 25.c
   Author: Subha Chakraborty
   Description: Write a program to create three child processes. The parent should wait for a particular child (use
   waitpid system call).
   Date: 29th August,2024
  =======================================================================================
  =======================================================================================*/ 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
int pid1,pid2;
pid1= fork();

if(pid1!=0)printf("The process id of first child %d\n",pid1);
if(pid1==0){
if(!pid1&&!fork()&&!fork()){
printf("Done creating forks\n");

}}
else{
int check=waitpid(pid1,NULL,0);
printf("Waited for child  process  with pid %d\n",check); 

}
}
/* Output: 

The process id of first child 4824
Waited for child  process  with pid 4824
Done creating forks


*/
