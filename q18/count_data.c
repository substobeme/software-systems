#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct count{
int num;
}c[3];

int main(){
c[0].num = rand()%100;
c[1].num= rand()%100;
c[2].num = rand()%100;
int fd= open("Database",O_RDWR|O_CREAT|O_EXCL,0744);
if(fd==-1){ printf("ERROR"); exit(-1);}
write(fd,&c,sizeof(c));
close(fd);


}




