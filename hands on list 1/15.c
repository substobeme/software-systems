/*========================================================================================
  ========================================================================================
   Name: 15.c
   Author: Subha Chakraborty
   Description:Write a program to display the environmental variable of the user (use environ).
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
 extern char ** environ;
/* To get the index of USER_NAME in environ */
for(int i=0;environ[i]!=NULL;i++){printf("%s,%d\n",environ[i],i);}
printf("%s\n",environ[22]);
}

