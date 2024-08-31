/*========================================================================================
  ========================================================================================
   Name: 6.c
   Author: Subha Chakraborty
   Description:Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls.
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
char buff[100];
int ret = read(0,buff,sizeof(buff));
write(1,buff,ret);
}
/* Output:
  $ ./a.out 
Hello, I am writing anything idk what
Hello, I am writing anything idk what

    */
