/*========================================================================================
  ========================================================================================
   Name: 24.c
   Author: Subha Chakraborty
   Description: 24. Write a program to create a message queue and print the key and message queue id.
   Date: 22nd September, 2024
  =======================================================================================
  =======================================================================================*/
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

int main() {
int key=ftok(".",'O');
int mId=msgget(key,IPC_CREAT|0777);
printf("Message Queue Key: %d\n",key);
printf("Message Queue ID: %d\n",mId);
return 0;
}
/* Output:
Message Queue Key: 1325678780
Message Queue ID: 1
 */
