#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid, n = 16;
    pid = fork();
    if (pid > 0) { 
        printf("Hello from parent [%d - %d]\n", pid, n);
    }
    else { 
        printf("Hello from child [%d - %d]\n", pid, n);
    } 
    return 0;
}