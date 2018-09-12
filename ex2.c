#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int i, count = 5;
    for (i = 0; i < count; i++) {
        fork();
        sleep(5);
    }
    return 0;
}