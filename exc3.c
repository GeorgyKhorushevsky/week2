#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#define True 1
void listener(int sig) {
    printf("Aborting!\n");
    exit(1);
}

int main() {
    signal(SIGINT, listener);
    while (True) {
        sleep(1);
        printf("Processing...\n");
    }
    return 0;
}