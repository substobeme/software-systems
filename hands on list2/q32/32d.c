/*============================================================================
============================================================================
Name : 32d.c
Author : Subha Chakraborty
Description :32. Write a program to implement semaphore to protect any critical section.
a. rewrite the ticket number creation program using semaphore
b. protect shared memory from concurrent write access
c. protect multiple pseudo resources ( may be two) using counting semaphore
d. remove the created semaphore
Date: 23rd September 2024.
============================================================================
===========================================================================
*/

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
int key = ftok(".", 6);
int id= semget(key, 1, IPC_CREAT | 0777);
printf("Deleting the semaphore : Press Enter \n");
getchar();
int st = semctl(id, 0, IPC_RMID);
return 0;
}
/*Output:subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2/q32$ ipcs -s

------ Semaphore Arrays --------
key        semid      owner      perms      nsems     
0x06041af9 27         subha-chak 777        1         

subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2/q32$ ipcs -s

------ Semaphore Arrays --------
key        semid      owner      perms      nsems     */


