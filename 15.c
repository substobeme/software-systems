/* Name: Subha Chhakraborty
   Reg No: MT2024156
   Problem Statement: 15. Write a program to display the environmental variable of the user (use environ). */


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
 extern char ** environ;
/* To get the index of USER_NAME in environ
for(int i=0;environ[i]!=NULL;i++){printf("%s,%d\n",environ[i],i);}*/
printf("%s\n",environ[22]);
}
/* Output:
$ ./a.out
USERNAME=subha-chakraborty
 */
