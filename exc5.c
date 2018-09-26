#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#define True 1


int main () {
    int chpid = fork();
    if (chpid == -1){
        return -1;
    } else if (chpid == 0) {
        while(True){
            sleep(1);
            printf("I'm alive!\n");
        }
    } else {   
        sleep(10); 
        kill(chpid, SIGTERM);
        printf("I've killed my child\n");
    }
    return 0;
}