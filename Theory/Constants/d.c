#include <stdio.h>

#define LENGTH 10

void print_array(int *array, int);

const int len = 10;

int main ()
{

    int a[] = {0,1,2,3,4,5,6,7,8,9};
    print_array(a, 10);

    printf("\n");

    int b[] = {0,1,2,3,4,5,6,7,8,9,10};
    print_array(b, 11);

    printf("len: %d\n", len);

    return 0;
}

void print_array(int *array, int size)
{
    const int length = size;
    for(int i = 0; i < length; i++)
    {
        printf("array[%d] :%d\n", i+1, array[i]);
    }
}