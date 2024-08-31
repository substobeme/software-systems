/*========================================================================================
  ========================================================================================
   Name: 27.c
   Author: Subha Chakraborty
   Description:Write a program to execute ls -Rl by the following system calls
   a. execl
   b. execlp
   c. execle
   d.execv
   e. execvp
   Date: 30th August,2024
  =======================================================================================
  =======================================================================================*/
  
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
extern char **environ;
int main(){
int c;
printf("What is your choice to use to execute ls -Rl, 1)execl 2)execlp 3)execle 4)execv  5)execvp\n");
scanf("%d",&c);
switch(c){
case 1:
execl("/bin/ls","ls","-Rl",NULL);
break;
case 2:
execlp("ls", "ls", "-Rl", NULL);
break;
case 3:
execle("/bin/ls","ls","-Rl",NULL,environ);
break;
case 4:
char *args[] = {"ls", "-Rl", NULL};
execv("/bin/ls", args);
break;
case 5:
execvp("ls", (char *[]){"ls", "-Rl", NULL});
default:
printf("Not a correct option\n");
break;
}

}
/*Output:
$ ./a.out
What is your choice to use to execute ls -Rl, 1)execl 2)execlp 3)execle 4)execv  5)execvp
5
.:
total 272
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    30 Aug 22 09:24  10.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   886 Aug 24 10:54  10.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   203 Aug 13 00:42  11.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1387 Aug 24 11:03  11.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   923 Aug 24 11:21  12.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   929 Aug 24 11:25  13.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1499 Aug 24 11:49  14.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   450 Aug 24 11:34  15.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    14 Aug 14 22:22  16
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   893 Aug 24 11:43  16a.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    90 Aug 24 11:57  16a.md
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   888 Aug 24 12:01  16b.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   755 Aug 27 14:37  19.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   485 Aug 24 09:22  1_a.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   535 Aug 24 09:25  1_b.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   529 Aug 24 09:34  1_c.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1004 Aug 27 14:24  20
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   375 Aug 27 14:03  20.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   367 Aug 27 14:55  21.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   531 Aug 27 16:27  22.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1509 Aug 29 01:37  23.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1097 Aug 29 02:09  24.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1049 Aug 30 16:04  25.c
-rw------- 1 subha-chakraborty subha-chakraborty   650 Aug 29 07:21  25.c.save
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1042 Aug 30 16:23  26.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1143 Aug 30 18:23  27.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1213 Aug 24 09:45  2.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   442 Aug 24 09:49  3.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   954 Aug 24 10:03  4.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    60 Aug 13 16:38  51.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    44 Aug 11 12:51  52.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   519 Aug 24 10:19  5.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   424 Aug 30 16:11  6.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    52 Aug 11 14:53  7.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    52 Aug 11 14:54  7.2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   858 Aug 30 16:15  7.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    77 Aug 11 15:06  8.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   939 Aug 24 10:38  8.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1399 Aug 24 10:36  9.c
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16344 Aug 30 18:23  a.out
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16000 Aug 30 16:21  b.out
-rw------- 1 subha-chakraborty subha-chakraborty    24 Aug 24 10:52  copy1
-rwxr--r-- 1 subha-chakraborty subha-chakraborty   159 Aug 24 11:01  file
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    18 Aug 22 08:36  file1
-rw------- 1 subha-chakraborty subha-chakraborty    18 Aug 22 08:47  file2
-rwx------ 1 subha-chakraborty subha-chakraborty    16 Aug 27 15:53  file22.txt
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 09:19  file3
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 09:07 'file for 3'
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 11 12:44  filenow1
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl1
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl2
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl3
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl4
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl5
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    33 Aug 27 13:31  gitf
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    44 Aug 11 12:50  hdlist1
-rw-rw-r-- 2 subha-chakraborty subha-chakraborty     0 Aug 24 09:22  hrd1
-rw-rw-r-- 2 subha-chakraborty subha-chakraborty     0 Aug 24 09:22  hrd2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   305 Aug 13 11:16  link.c
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 09:48  newfile
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    24 Aug 24 10:52  original
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     6 Aug 12 22:58  pipe
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   941 Aug 12 22:41  prac.c
drwxrwxr-x 2 subha-chakraborty subha-chakraborty  4096 Aug 21 00:29  q1
drwxrwxr-x 2 subha-chakraborty subha-chakraborty  4096 Aug 24 12:05  q17
drwxrwxr-x 2 subha-chakraborty subha-chakraborty  4096 Aug 24 15:04  q18
prw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 09:31  q3_pipe
-rwxr--r-- 1 subha-chakraborty subha-chakraborty    30 Aug 24 10:46  seek
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   204 Aug  8 08:26  seek.c
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 24 09:19  sflink1 -> file3
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 24 09:22  sflink2 -> file3
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   327 Aug 13 11:15  softlnk.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1430 Aug 11 12:58  stat
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   824 Aug 29 01:57  test.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1430 Aug  8 09:02  x
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     5 Aug  8 09:10  x1

./q1:
total 24
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16000 Aug  8 07:01 a.out
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:59 file
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:39 file1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:44 file2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:55 file3
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:59 hrd
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:59 hrd2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   305 Aug 13 11:16 link.c
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 21 00:29 softie -> file1
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty    39 Aug 21 00:29 softie2 -> /home/subha-chakraborty/hdlist/q1/file2
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 21 00:29 softie3 -> file3
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   327 Aug 13 11:15 softlnk.c

./q17:
total 32
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1270 Aug 15 00:59 17.c
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16504 Aug 15 00:58 a.out
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     8 Aug 24 12:07 myticket_database
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   442 Aug 15 00:46 tcket_dbase.c

./q18:
total 36
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1800 Aug 24 14:56 18a.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1800 Aug 24 15:00 18b.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   410 Aug 24 13:56 18.c
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16200 Aug 24 15:04 a.out
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   322 Aug 24 15:04 count_data.c
-rwxr--r-- 1 subha-chakraborty subha-chakraborty    12 Aug 24 15:04 Database
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 15:00 l_type
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 15:00 l_whence
subha-chakraborty@subha-chakraborty-ASUS-TUF-Dash-F15-FX517ZC-FX517ZC:~/hdlist1$ ./a.out
What is your choice to use to execute ls -Rl, 1)execl 2)execlp 3)execle 4)execv  5)execvp
5
.:
total 272
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    30 Aug 22 09:24  10.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   886 Aug 24 10:54  10.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   203 Aug 13 00:42  11.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1387 Aug 24 11:03  11.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   923 Aug 24 11:21  12.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   929 Aug 24 11:25  13.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1499 Aug 24 11:49  14.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   450 Aug 24 11:34  15.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    14 Aug 14 22:22  16
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   893 Aug 24 11:43  16a.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    90 Aug 24 11:57  16a.md
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   888 Aug 24 12:01  16b.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   755 Aug 27 14:37  19.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   485 Aug 24 09:22  1_a.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   535 Aug 24 09:25  1_b.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   529 Aug 24 09:34  1_c.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1004 Aug 27 14:24  20
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   375 Aug 27 14:03  20.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   367 Aug 27 14:55  21.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   531 Aug 27 16:27  22.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1509 Aug 29 01:37  23.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1097 Aug 29 02:09  24.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1049 Aug 30 16:04  25.c
-rw------- 1 subha-chakraborty subha-chakraborty   650 Aug 29 07:21  25.c.save
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1042 Aug 30 16:23  26.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1143 Aug 30 18:23  27.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1213 Aug 24 09:45  2.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   442 Aug 24 09:49  3.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   954 Aug 24 10:03  4.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    60 Aug 13 16:38  51.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    44 Aug 11 12:51  52.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   519 Aug 24 10:19  5.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   424 Aug 30 16:11  6.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    52 Aug 11 14:53  7.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    52 Aug 11 14:54  7.2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   858 Aug 30 16:15  7.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    77 Aug 11 15:06  8.1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   939 Aug 24 10:38  8.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1399 Aug 24 10:36  9.c
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16344 Aug 30 18:23  a.out
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16000 Aug 30 16:21  b.out
-rw------- 1 subha-chakraborty subha-chakraborty    24 Aug 24 10:52  copy1
-rwxr--r-- 1 subha-chakraborty subha-chakraborty   159 Aug 24 11:01  file
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    18 Aug 22 08:36  file1
-rw------- 1 subha-chakraborty subha-chakraborty    18 Aug 22 08:47  file2
-rwx------ 1 subha-chakraborty subha-chakraborty    16 Aug 27 15:53  file22.txt
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 09:19  file3
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 09:07 'file for 3'
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 11 12:44  filenow1
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl1
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl2
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl3
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl4
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 10:16  fl5
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    33 Aug 27 13:31  gitf
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    44 Aug 11 12:50  hdlist1
-rw-rw-r-- 2 subha-chakraborty subha-chakraborty     0 Aug 24 09:22  hrd1
-rw-rw-r-- 2 subha-chakraborty subha-chakraborty     0 Aug 24 09:22  hrd2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   305 Aug 13 11:16  link.c
-rwxr--r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 09:48  newfile
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty    24 Aug 24 10:52  original
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     6 Aug 12 22:58  pipe
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   941 Aug 12 22:41  prac.c
drwxrwxr-x 2 subha-chakraborty subha-chakraborty  4096 Aug 21 00:29  q1
drwxrwxr-x 2 subha-chakraborty subha-chakraborty  4096 Aug 24 12:05  q17
drwxrwxr-x 2 subha-chakraborty subha-chakraborty  4096 Aug 24 15:04  q18
prw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 09:31  q3_pipe
-rwxr--r-- 1 subha-chakraborty subha-chakraborty    30 Aug 24 10:46  seek
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   204 Aug  8 08:26  seek.c
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 24 09:19  sflink1 -> file3
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 24 09:22  sflink2 -> file3
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   327 Aug 13 11:15  softlnk.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1430 Aug 11 12:58  stat
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   824 Aug 29 01:57  test.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1430 Aug  8 09:02  x
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     5 Aug  8 09:10  x1

./q1:
total 24
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16000 Aug  8 07:01 a.out
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:59 file
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:39 file1
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:44 file2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:55 file3
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:59 hrd
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug  8 06:59 hrd2
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   305 Aug 13 11:16 link.c
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 21 00:29 softie -> file1
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty    39 Aug 21 00:29 softie2 -> /home/subha-chakraborty/hdlist/q1/file2
lrwxrwxrwx 1 subha-chakraborty subha-chakraborty     5 Aug 21 00:29 softie3 -> file3
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   327 Aug 13 11:15 softlnk.c

./q17:
total 32
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1270 Aug 15 00:59 17.c
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16504 Aug 15 00:58 a.out
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     8 Aug 24 12:07 myticket_database
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   442 Aug 15 00:46 tcket_dbase.c

./q18:
total 36
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1800 Aug 24 14:56 18a.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty  1800 Aug 24 15:00 18b.c
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   410 Aug 24 13:56 18.c
-rwxrwxr-x 1 subha-chakraborty subha-chakraborty 16200 Aug 24 15:04 a.out
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty   322 Aug 24 15:04 count_data.c
-rwxr--r-- 1 subha-chakraborty subha-chakraborty    12 Aug 24 15:04 Database
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 15:00 l_type
-rw-rw-r-- 1 subha-chakraborty subha-chakraborty     0 Aug 24 15:00 l_whence
 */
