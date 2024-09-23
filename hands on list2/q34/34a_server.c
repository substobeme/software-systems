/*========================================================================================
  ========================================================================================
   Name: 34a_server.c
   Author: Subha Chakraborty
   Description:34. Write a program to create a concurrent server.
   a. use fork
   b. use pthread_create
   Date:19th September, 2024
  =======================================================================================
  =======================================================================================*/

#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
struct sockaddr_in sv, cl;
int sd, sd1;
char buf[1000];
sd = socket(AF_INET, SOCK_STREAM, 0);
sv.sin_family = AF_INET;
sv.sin_addr.s_addr = INADDR_ANY;
sv.sin_port = htons(6006);
bind(sd, (struct sockaddr *)&sv, sizeof(sv));
listen(sd, 5);
while (1) {
int size = sizeof(cl);
sd1 = accept(sd, (struct sockaddr *)&cl, &size);
if (!fork()) {
printf("Connected to client\n");
int s = read(sd1, buf, sizeof(buf) - 1);
buf[s] = '\0';
printf("Received your message client: %s\n", buf);
write(sd1, "Fine, will acknowledge you\n", 27);
close(sd1);
 exit(0);
 } 
else 
{close(sd1);}}
close(sd);
return 0;
}

/* Output:$ ./srv
Connected to client
Received your message client: Hello server

Connected to client
Received your message client: Hello server
 */
