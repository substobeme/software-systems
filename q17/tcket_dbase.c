#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct ticket_info{
int ticketNo;
};

int main(){
struct ticket_info tckt,tckt2;
tckt.ticketNo = rand()%100;
int fd= open("myticket_database",O_RDWR,0744);
write(fd,&tckt,sizeof(tckt));
int fd2 = open("myticket_database",O_RDONLY,0444);
read(fd2,&tckt2,sizeof(tckt2));
printf("The ticket number is %d\n", tckt2.ticketNo); 
close(fd);
close(fd2);
}
