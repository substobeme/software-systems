/*
============================================================================
============================================================================
Name : 26.c
Author : Subha Chakraborty
Description : 26. Write a program to send messages to the message queue. Check $ipcs -q
Date: 22nd September 2024.
============================================================================
===========================================================================
*/

#include <unistd.h>
#include <stdio.h>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <string.h>
struct msg {
char bmsg[1000] ;
}msq;

int main()
{int key = ftok(".",'O');
int id = msgget(key,0);
printf("Enter the message text : ");
scanf("%s",msq.bmsg);
int sz= strlen(msq.bmsg);
msgsnd(id,&msq, sz+1,0);
}
/*Output: 
$ ./a.out
Enter the message text : hi_subha_here
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ipcs -q

------ Message Queues --------
key        msqid      owner      perms      used-bytes   messages    
0xffffffff 0          subha-chak 777        0            0           
0x4f0440bc 1          subha-chak 777        14           1     
*/
