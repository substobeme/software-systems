/* Name: Subha Chakraborty
   Reg No: MT2024156
   Problem Statement: 17. Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file. */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
struct ticket_info{
int ticketNo;
}tck;
int main(){
int fd = open("myticket_database",O_RDWR,0744);

struct flock *l=malloc(sizeof(struct flock));
l->l_type= F_WRLCK;
l->l_whence =  SEEK_SET;
l->l_start = 0;
l->l_len=0;
l->l_pid = getpid();
printf("Waiting for permission to book ticket\n");
int check = fcntl(fd,F_SETLKW,l);
if(check== -1){printf("Locking failed\n");}
else { printf("Locked succesfully\n");}
int sz=read(fd,&tck,sizeof(tck));
printf("The current number of tickets is %d\n",tck.ticketNo);
lseek(fd,0L,SEEK_SET);
printf("Please  book the ticket by pressing 1 ");
int val;
scanf("%d",&val);
if(val==1){ l->l_type= F_UNLCK;
tck.ticketNo++;

write(fd,&tck,sizeof(sz));
printf("The number of tickets is %d\n",tck.ticketNo);
}
fcntl(fd,F_SETLKW,l);
printf("Thanks for booking");
free(l);
close(fd);
}


