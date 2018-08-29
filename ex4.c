#include <stdio.h>


void swap(int* x, int* y){
    *y=(*x) ^ (*y);
    *x=(*x) ^ (*y);
    *y=(*x) ^ (*y);
}

int main(){
    int x, y;
    scanf("x: %d \n", &x);
    scanf("y: %d \n", &y);
    swap(&x, &y);
    printf("new x: %d \n", x);
    printf("new y: %d \n", y);
}
