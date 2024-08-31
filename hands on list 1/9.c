/*========================================================================================
  ========================================================================================
Name: 9.c
Author: Subha Chakraborty
Description:Write a program to print the following information about a given file.
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification
j. time of last change
Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/


#include<time.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
int main(int c, char* argv[]){
struct stat *f1= malloc(sizeof(struct stat));
if(stat(argv[1], f1)==-1){
printf("Wrong Input");
exit(-1);
}

printf("The inode number is %lu\n",f1->st_ino);
printf("The  number of hardlinks is %lu\n",f1->st_nlink);
printf("The UID number is %u\n",f1->st_uid);
printf("The GID number is %u\n",f1->st_gid);
printf("The size  of the file is %ld\n",f1->st_size);
printf("The blocksize %ld\n",f1->st_blksize);
printf("The  number of blocks is %ld\n",f1->st_blocks);


time_t t = f1->st_mtim.tv_sec; 



printf("The time of last modification: %s\n", ctime(&t));
time_t t2 = f1->st_ctim.tv_sec;


printf("The time of last change %s\n", ctime(&t2));
free(f1);
}
/* Output:$ ./a.out 4.c
The inode number is 6178873
The  number of hardlinks is 1
The UID number is 1000
The GID number is 1000
The size  of the file is 954
The blocksize 4096
The  number of blocks is 8
The time of last modification: Sat Aug 24 10:03:46 2024

The time of last change Sat Aug 24 10:03:46 2024
 */
