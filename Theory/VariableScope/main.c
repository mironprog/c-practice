#include <stdio.h>

void func(int a);

int y = 3;
int x = 2;

int main(void)
{
    
    int x = 5;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    y++;
    func(3);

    {
        int z = 2;
        printf("z: %d\n", z);
    }

    for(int i = 0; i < 10; i++)
    {
        printf("i: %d\n", i);
    }

    return 0;
}


void func(int a)
{
    int x = 8;
    y++;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    a++;
    printf("a: %d\n", a);

}