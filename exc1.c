#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define N "This is my String"


int main () {
    char *s = N;
    int buffsize = strlen(s)+1;
    char *transfer = malloc(buffsize);
    int pipefd[2];
    pipe(pipefd);
    write(pipefd[1], s, buffsize);
    printf("Sended: %s\n", s);
    read(pipefd[0], transfer, buffsize);
    printf("Received: %s\n", transfer);
    return 0;
}
