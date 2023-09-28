#include <stdio.h>
#include <stdlib.h> 

int main (void)
{
    int size = 0;
    printf("Enter the size: ");
    scanf("%d", &size);

    int *a = calloc (size, sizeof(int));

    for(int i = 0; i < size; i++)
    {
        a[i] = size - i;
    }

    for(int i = 0; i < size; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }

    printf("\n");

    printf("a: %p\n", a);

    a = realloc(a, sizeof(int) * (size + 5));

    for(int i = 0; i < (size + 5); i++)
    {
        a[i] = 9;
    }

     for(int i = 0; i < (size + 5); i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
       
    //int *save = a;
    free(a);



    /*
    printf("save: %p\n", save);
    for(int i = 0; i < 10; i++)
    {
        printf("save[%d]: %d\n", i, save[i]);
    }
    printf("\n");
    */

    return 0;
}
