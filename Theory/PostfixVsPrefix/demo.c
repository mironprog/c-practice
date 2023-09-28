#include <stdio.h>

int main(void)
{
    int i = 0;
    int result = 0;
    
    // printf("i:%d\n", i++);
    // printf("i after: %d\n", i);

    result = ++i * 10;

    printf("result: %d\n", result);


    return 0;
}