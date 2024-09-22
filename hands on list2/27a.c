/*========================================================================================
  ========================================================================================
   Name: 27a.c
   Author: Subha Chakraborty
   Description: 27. Write a program to receive messages from the message queue.
a. with 0 as a flag
b. with IPC_NOWAIT as a flag
   Date: 22nd September, 2024
  =======================================================================================
  =======================================================================================*/
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
struct msg{
char bmsg[1000];
}msq;

int main() {
int key = ftok(".",'O');
int id = msgget(key, 0);
msgrcv(id, &msq, sizeof(msq.bmsg), 0, 0);
printf("\nMessage: %s\n", msq.bmsg);
return 0;
}
/*
Output:
$./a.out

Message: hi_subha_heres
*/
