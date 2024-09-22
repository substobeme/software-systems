/*============================================================================
============================================================================
Name : 28.c
Author : Subha Chakraborty
Description :28. Write a program to change the exiting message queue permission. (use msqid_ds structure) 
Date: 22nd September 2024.
============================================================================
===========================================================================
*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>

int main() {
int key = 0xffffffff;
int id = msgget(key, 0);
struct msqid_ds ds;
msgctl(id, IPC_STAT, &ds);
printf("Current permissions: %o\n", ds.msg_perm.mode & 0777);
ds.msg_perm.mode = 0610;
msgctl(id, IPC_SET, &ds);
printf("Updated permissions: %o\n", ds.msg_perm.mode & 0777);
return 0;
}
/*Output:
Current permissions: 777
Updated permissions: 610
*/
