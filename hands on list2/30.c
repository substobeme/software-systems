/*============================================================================
============================================================================
Name : 30.c
Author : Subha Chakraborty
Description :30. Write a program to create a shared memory.
a. write some data to the shared memory
b. attach with O_RDONLY and check whether you are able to overwrite.
c. detach the shared memory
d. remove the shared memory 
Date: 22nd September 2024.
============================================================================
===========================================================================
*/

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

int main()
{  //30(a)
int  key = ftok(".", 1);
int id = shmget(key, 1024, IPC_CREAT | 0700);
char *mem = (char *)shmat(id, NULL, 0);
printf("The id is %d",id);
strcpy(mem,"Hello :)");
// 30(c)
printf("Detaching pointer to shared memory :O\n");
shmdt(mem);
// 30(d)
printf("Deleting the shared memory :(\n");
shmctl(32821, IPC_RMID, NULL);
return 0;
}
/*Output: ./a.out
The id is 32821 

subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ipcs -m

------ Shared Memory Segments --------
key        shmid      owner      perms      bytes      nattch     status      
0x010440bc 32821      subha-chak 700        1024       0               


$ ./a.out
Detaching pointer to shared memory :O
Deleting the shared memory :(
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ipcs -m

------ Shared Memory Segments --------
key        shmid      owner      perms      bytes      nattch     status   

*/
