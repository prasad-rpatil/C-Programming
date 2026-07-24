#include <stdio.h>

int main()
{
    int n;
    printf("Enter a numer to chcek: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not a prime number\n");
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not a prime number\n");
            return 0;
        }
    }
    printf("Prime number\n");

    return 0;
}