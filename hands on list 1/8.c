/*========================================================================================
  ========================================================================================
   Name: 8.c
   Author: Subha Chakraborty
   Description:Write a program to open a file in read only mode, read line by line and display each line as it is read.
   Close the file when end of file is reached.
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(int c, char* argv[]){
if(c!=2) { printf("the file doesn't exit"); exit(-1);}

int fd = open(argv[1],O_RDONLY);
if(fd==-1) printf("No such file");
char buffer[5000];
int  buff = read(fd,buffer,sizeof(buffer));
int move =0;
for(int i=0;i<buff;i++){

if(buffer[i]=='\n'){
write(1,buffer+move,i+1-move);
printf("The program has read one line\n");
move = i+1;
i=i+1;

}

}
close(fd);
}
/*terminal input: ./a.out 8.1
 output: 
this is line1.
The program has read one line
this is line2.
The program has read one line
this is line 3
The program has read one line
this is line 4.
The program has read one line
this is line 5.
The program has read one line
*/
