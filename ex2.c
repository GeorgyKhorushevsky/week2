
#include <stdio.h>



int main()
{

    char str[256];

    gets(str);

    printf("\n");

    int len = strlen(str);

    for (int i = 1; i<=len; i++){

        printf("%c", str[len-i]);

    }

    return 0;

}