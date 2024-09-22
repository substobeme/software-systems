/*============================================================================
============================================================================
Name : 29.c
Author : Subha Chakraborty
Description :29. Write a program to remove the message queue. 
Date: 22nd September 2024.
============================================================================
===========================================================================
*/
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>

int main() {
int id1= msgget((int)0xffffffff,0);
int id2= msgget(0x4f0440bc,0);
msgctl(id1,IPC_RMID,NULL);
msgctl(id2, IPC_RMID, NULL);
return 0;
}
/* Output:
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ./a.out
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ipcs -q

------ Message Queues --------
key        msqid      owner      perms      used-bytes   messages */
