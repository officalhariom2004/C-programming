#include <stdio.h>
int fact(int);
int main()
{
    int n, factorial;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("factorial = %d", fact(n));
    return 0;
}