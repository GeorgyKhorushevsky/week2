#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#define True 1

void lis1(int sig){
    printf("SIGKILL HAS BEEN USED!");
}

void lis2(int sig){
    printf("SIGSTOP HAS BEEN USED!");
}
void lis3(int sig){
    printf("SIGUSR1 HAS BEEN USED!");
}

int main() {
    signal(SIGKILL, lis1);
    signal(SIGSTOP, lis2);
    signal(SIGUSR1, lis3);
    while (True) {
        sleep(1);
        printf("Processing...\n");
    }
    return 0;
}