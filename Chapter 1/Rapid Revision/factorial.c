#include <stdio.h>
int main(){
    int n,fact;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial %d! = %d",n,fact);
    return 0;
}