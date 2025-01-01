#include <stdio.h>
int main()
{
    int n, rem = 0, palindrome = 0, temp;
    printf("Enter the number :");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        palindrome = palindrome*10+ rem;
        n = n / 10;
    }
    if (temp == palindrome)
    {
        printf("It is a palindrome number");
    }
    else
        printf("It is not a palindrome number");

    return 0;
}