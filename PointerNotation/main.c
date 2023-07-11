#include <stdio.h>

void print(int *a);

int main(void)
{
    int a[3] = {1,2,3};
    int *b;

    b = a;

    printf("b: %p\na: %p\n", b,a);
    printf("a[1] = %d\n", a[1]);
    print(a);

    printf("b[1] = %d\n", b[1]);

    printf("*b = %d\n", *b);
    printf("*(b + 1) = %d\n", *(b + 1));
    printf("*(b + 2) = %d\n", *(b + 2));

    printf("*a = %d\n", *a);
    printf("*(a + 1) = %d\n", *(a + 1));
    printf("*(a + 2) = %d\n", *(a + 2));

    b++;
    printf("*b = %d\n", *b);
    printf("*(b + 1) = %d\n", *(b + 1));

    print(a + 1);

    /*
    int c[3] = {2,4,5};

    a = c;
    a++;
    printf("\n\na[1] = %d\n", a[1]);
    */

    return 0;
}

void print(int *a)
{
    printf("a[1] = %d\n", a[1]);
}