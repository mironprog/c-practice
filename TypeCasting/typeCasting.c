#include <stdio.h>

int main (void) 
{
    int a = 5;
    int b = 2;

    double c = (double) a / b;

    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d / %d = %f\n", a, b, c);
    
    int x = 2;
    double y = 5;

    int z = x / y;

    printf("z: %d\n", z);
    
    return 0;
}