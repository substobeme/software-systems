/*============================================================================
============================================================================
Name : 31b.c
Author : Subha Chakraborty
Description :31. Write a program to create a semaphore and initialize value to the semaphore.
a. create a binary semaphore
b. create a counting semaphore 
Date: 23rd September 2024.
============================================================================
===========================================================================
*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <unistd.h>
#include <stdio.h>

void main() {
union semun {
int val;
} semset;
int key = ftok(".", 91);
int id= semget(key, 1, IPC_CREAT | 0777);
semset.val = 50; 
int sem= semctl(id, 0, SETVAL, semset);
}

/*Output:subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ./a.out
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ipcs -s

------ Semaphore Arrays --------
key        semid      owner      perms      nsems     
0x010440bc 0          subha-chak 777        1         
0x5b0440bc 1          subha-chak 777        1    */
