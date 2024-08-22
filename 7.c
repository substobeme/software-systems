#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
char buffer[200];
int fd = open("7.1",O_RDWR);
int ret = read(fd,buffer,sizeof(buffer));
int fd2 =open("7.2",O_RDWR);
write(fd2,buffer,ret);
close(fd);
close(fd2);
}
