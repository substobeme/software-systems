/*========================================================================================
  ========================================================================================
   Name: 25.c
   Author: Subha Chakraborty
   Description: 25. Write a program to print a message queue's (use msqid_ds and ipc_perm structures)
a. access permission
b. uid, gid
c. time of last message sent and received
d. time of last change in the message queue
d. size of the queue
f. number of messages in the queue
g. maximum number of bytes allowed
h. pid of the msgsnd and msgrcv.
   Date: 22nd September, 2024
  =======================================================================================
  =======================================================================================*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
int  key=ftok(".",'O');
int id=msgget(key,0);
struct msqid_ds mq;
msgctl(id,IPC_STAT,&mq);
printf("Access Permissions: %03o\n",mq.msg_perm.mode&0777);
printf("Effective UID of Owner: %d\n",mq.msg_perm.uid);
printf("Effective GID of Owner: %d\n",mq.msg_perm.gid);
printf("Effective UID of Creator: %d\n",mq.msg_perm.cuid);
printf("Effective GID of Creator: %d\n",mq.msg_perm.cgid);
printf("Time of last message sent: %s",ctime(&mq.msg_stime));
printf("Time of last message received: %s",ctime(&mq.msg_rtime));
printf("Time of last change: %s",ctime(&mq.msg_ctime));
printf("Current number of message in queue: %lu\n",mq.msg_qnum);
printf("Maximum number of bytes allowed in queue: %lu\n",mq.msg_qbytes);
printf("PID of last message sent: %d\n",mq.msg_lspid);
printf("PID of last message received: %d\n",mq.msg_lrpid);
return 0;
}
/*Output:
Access Permissions: 777
Effective UID of Owner: 1000
Effective GID of Owner: 1000
Effective UID of Creator: 1000
Effective GID of Creator: 1000
Time of last message sent: Sun Sep 22 19:25:19 2024
Time of last message received: Sun Sep 22 19:25:29 2024
Time of last change: Sun Sep 22 15:46:08 2024
Current number of message in queue: 0
Maximum number of bytes allowed in queue: 16384
PID of last message sent: 12528
PID of last message received: 12542

 */
