/*========================================================================================
  ========================================================================================
   Name: 14.c
   Author: Subha Chakraborty
   Description:14. Write a simple program to create a pipe, write to the pipe, read from pipe and display on
   the monitor.
   the signal or not.
   Date: 20th September,2024
  =======================================================================================
  =======================================================================================*/ 
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int fd[2];
char buf[4000];
if(pipe(fd)==-1){
perror("piped not created\n");
exit(1);
}
if(!fork()){
close(fd[1]);
read(fd[0],buf,sizeof(buf));
printf("The content of the pipe were : %s\n",buf);
close(fd[0]);
}
else{
close(fd[0]);
char s[4000];
printf("Enter your message:");
scanf("%s",s);
write(fd[1],s,strlen(s));
close(fd[1]);
}

}
/*Output:
Enter your message:subha_here
The content of the pipe were : subha_here
 */
