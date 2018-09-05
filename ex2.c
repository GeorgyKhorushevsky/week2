
#include <stdio.h>
 
void swap(int *i, int *j)
{
    int t = *i;
    *i = *j;
    *j = t;
}
 
void bubble_sort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
        for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
int main()
{
    int array[] = {7, 11, -3, 24, 8, 66, 1, 0};
    int n = sizeof(array)/sizeof(array[0]);
    bubble_sort(array, n);
    int i;
    for (i=0; i < n; i++)
        printf("%d ", array[i]);
    return 0;
}