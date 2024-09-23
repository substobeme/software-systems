/*============================================================================
============================================================================
Name : 30_s.c
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
{
int id= 32821;
char *data;
data = shmat(id, 0, SHM_RDONLY);
printf("Data to add in shared memory: ");
scanf("%s", data);
}

/* Output:$ ./a.out
Data to add in shared memory: hello
Segmentation fault (core dumped)
 */
