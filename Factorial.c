#include <stdio.h>

int main()
{
    int n, originalnum, factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    originalnum = n;
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        while (n > 0)
        {
            factorial *= n;
            n--;
            printf("The factorial of the %d is %d\n", originalnum, factorial);
        }
    }

    return 0;
}
