#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
    char command[250];
    while (1) {
        printf("> ");
        scanf("%s", command);
        char *token = strtok(command, " "); 
        system(token);
    }
    return 0;
}