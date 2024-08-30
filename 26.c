/*========================================================================================
  ========================================================================================
   Name: 26.c
   Author: Subha Chakraborty
   Description:Write a program to execute an executable program.
               a. use some executable program
               b. pass some input to an executable program. (for example execute an executable of $./a.out name)
   Date: 30th August,2024
  =======================================================================================
  =======================================================================================*/ 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
printf("This is still 26.c\n");

execl("/home/subha-chakraborty/hdlist1/a.out","a.out",NULL);
printf("This line is printed if couldn't execute the executable program\n");


}
/*Output:

$ cc 26.c -o b.out
$ cc 6.c -o a.out
$ ./b.out
This is still 26.c
This i will print in terminal 
This i will print in terminal
*/
