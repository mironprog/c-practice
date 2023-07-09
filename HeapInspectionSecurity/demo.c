#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *password;
    char *other_ptr;

    password = malloc(10 * sizeof(char));
    
    printf("\nTrustWorthy Program\n\n");
    printf("Enter your password: \n");
    scanf("%s", password);

    other_ptr = password;

    free(password);

    for(int i = 0; i < 10; i++)
        printf("%c", other_ptr[i]);
    
    printf("\n");



    return  0;
}