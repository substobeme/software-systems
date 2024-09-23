/*============================================================================
============================================================================
Name : 32b.c
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
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
int shmSize = 20;
union semun {
int val;
struct semid_ds *buf;
unsigned short *array;
struct seminfo *__buf;
}u;
int semKey = ftok(".", 363);
int id = semget(semKey, 1, 0);
if (id == -1) {
id = semget(semKey, 1, IPC_CREAT | 0700);
u.val = 1;
semctl(id, 0, SETVAL, u);
}
int shmKey = ftok(".", 3322);
int shmId = shmget(shmKey, shmSize, IPC_CREAT | 0700);
char* shrd = shmat(shmId, (void *)0, 0);
struct sembuf op;
op.sem_num = 0;
op.sem_flg = 0;
printf("Press enter to lock the critical section!\n");
getchar();
op.sem_op = -1;
int opStatus = semop(id, &op, 1);
printf("Critical Section is now locked!\n");
printf("Start of the critical section!\n");
sprintf(shrd, "Sup Subha here");
printf("Press enter to read from the shared memory!\n");
getchar();
printf("%s\n", shrd);
printf("Press enter to exit the critical section!\n");
getchar();
op.sem_op = 1;
opStatus = semop(id, &op, 1);
printf("Critical section is now unlocked!\n");
}
/*Output:$ ./a.out
Press enter to lock the critical section!

Critical Section is now locked!
Start of the critical section!
Press enter to read from the shared memory!

Sup Subha here
Press enter to exit the critical section!

Critical section is now unlocked!
 */





