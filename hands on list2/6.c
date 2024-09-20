/*========================================================================================
  ========================================================================================
   Name: 6.c
   Author: Subha Chakraborty
   Description:6. Write a simple program to create three threads.
   Date: 18th September,2024
  =======================================================================================
  =======================================================================================*/ 

#include <stdio.h>
#include <pthread.h>

void *thread_func(void *arg) {
printf("Successfully created thread with ID: %lu\n", pthread_self());}

int main() {
pthread_t t[3];
for(int i = 0; i < 3; i++) {
pthread_create(&t[i], NULL, thread_func, NULL);}
for(int i = 0; i < 3; i++) {pthread_join(t[i], NULL);}
return 0;
}

/*Output:
Successfully created thread with ID: 140373531817664
Successfully created thread with ID: 140373515032256
Successfully created thread with ID: 140373523424960
*/
