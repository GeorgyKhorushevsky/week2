#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
    char command[250];
    while (1) {
        printf("> ");
        scanf(" %[^\t\n]s", command);
        system(command);
    }
    return 0;
}
