#include <stdio.h>

int factorial(int n);

int main()
{

    int n = 0;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    /*
    Iterative solution

    while (n >= 1)
    {
        fact = n * fact;
        n--;
    }

    */


    //recursive solution

    fact = factorial(n);

    printf("Fact is: %d", fact);

    

    return 0;
}

int factorial(int n)
{   
    if (n == 1) return 1;

    return n * factorial(n - 1);
}