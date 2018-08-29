

#include <stdio.h>

#include <limits.h>

#include <float.h>


int main()
{
 
    int var1 = INT_MAX;

    float var2 = FLT_MAX;

    double var3 = DBL_MAX;

    printf("size of  int: %lu , max value: %lu \n", sizeof(var1), var1);

    printf("size of float: %lu , max value: %f \n", sizeof(var2), var2);

    printf("size of double: %lu , max value: %lf \n", sizeof(var3), var3);


    return 0;

}