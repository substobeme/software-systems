/*========================================================================================
  ========================================================================================
   Name: 14.c
   Author: Subha Chakraborty
   Description:Write a program to find the type of a file.
   a. Input should be taken from command line.
   b. program should be able to identify any type of a file.
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
int main(int c,char *argv[]){
if(c!=2){printf("Wrong number of arguments\n"); exit(-1);}
struct stat *temp=malloc(sizeof(struct stat));
if(lstat(argv[1],temp)==-1){ printf("NO such FILE");exit(-1);}
unsigned int res = temp->st_mode;
 
if((res & S_IFMT) == S_IFSOCK) printf("This file is a socket\n");
else if((res & S_IFMT) == S_IFLNK) printf("This file is a symbolic link\n");
else if((res & S_IFMT) == S_IFREG) printf("This file is a regular file\n");
else if((res & S_IFMT) == S_IFBLK) printf("This file is a block device\n");
else if((res & S_IFMT) == S_IFCHR) printf("This file is a character device\n");
else if((res & S_IFMT) == S_IFDIR) printf("This file is a directory\n");
else if((res & S_IFMT) == S_IFIFO) printf("This file is a named pipe\n");
else printf("No clue");
free(temp);
}
/* Output:
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ ./a.out q3_pipe
This file is a named pipe
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ ./a.out sflink1
This file is a symbolic link
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ ./a.out fl5
This file is a regular file


 */
