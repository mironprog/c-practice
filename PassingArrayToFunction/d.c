#include <stdio.h>

void add(int x);
void arrayAdd(int array[]);
void arrayAddPtr(int *array);

int main(void)
{

    int a = 5;
    add(a);
    printf("a: %d\n", a);

    int myArray[5] = {1,2,3,4,5};
    arrayAdd(myArray);

    printf("myArray[0]: %d\n", myArray[0]);

    printf("myArray: %p\n", myArray);

    arrayAddPtr(myArray);

    return 0;
}

void add(int x)
{
    printf("x: %d\n", x);
    x = x + 1;
}

void arrayAddPtr(int *array)
{
    printf("array: %p\n", array);
    array[0] = array[0] + 1;
}

void arrayAdd(int array[])
{
    printf("array: %p\n", array);
    array[0] = array[0] + 1;
}