#include <stdio.h>
int main(){
    int n,b=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            b = 0;
            break;
        }
    }
    
    if (b)
    {
        printf("It is prime number");
    } else printf("It is not a prime number");
    return 0;
}