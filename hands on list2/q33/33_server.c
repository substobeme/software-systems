
/*========================================================================================
  ========================================================================================
   Name: 33_server.c
   Author: Subha Chakraborty
   Description: 33. Write a program to communicate between two machines using socket.
   Date:17th September, 2024
  =======================================================================================
  =======================================================================================*/



#include<arpa/inet.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdio.h>
int main(){
struct sockaddr_in sv,cl;
int sd,size,sd1;
char buf[1000];
sd = socket(AF_INET,SOCK_STREAM,0);
sv.sin_family=AF_INET;
sv.sin_addr.s_addr=INADDR_ANY;

sv.sin_port= htons(6006);
bind(sd,(void *)(&sv),sizeof(sv));
listen(sd,5);
size=sizeof(cl);
sd1=accept(sd,(void *)(&cl),&size);
printf("connected to one client\n");

int s=read(sd1,buf,sizeof(buf));
printf("Received your message client: %s\n",buf);
write(sd1,"Fine will acknowledge you\n",27);
close(sd1);
}
/*Output:
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ cc 33_server.c -o srv
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1/hands on list2$ ./srv
connected to one client
Received your message client: Hello server */
