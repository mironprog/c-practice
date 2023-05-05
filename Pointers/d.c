#include <stdio.h>

void swap(int *, int *);

int main (void)
{
    int b = 42;

    int *a = &b;

    printf("b: %d\n", b);
    printf("&b: %p\n", &b);
    printf("a: %p\n", a);

    *a = 50;

    printf("b: %d\n", b);
    printf("&b: %p\n", &b);
    printf("a: %p\n", a);

    int x, y;
    x = 10;
    y = 5;

    printf("x:%d y:%d\n", x,y);
    printf("&x:%p\n&y:%p\n", &x, &y);
    swap(&x,&y);
    printf("x:%d y:%d\n", x,y);




    return 0;
}

void swap(int *a, int *b)
{
    printf("&a:%p\n&b:%p\n", a, b);
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}