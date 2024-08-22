#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
char buff[100];
int ret = read(0,buff,sizeof(buff));
write(1,buff,ret);
}
