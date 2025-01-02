#include <stdio.h>
int main()
{
    int A[5];

    for (int i = 0; i <5; i++)
    {
        printf("enter the %d element : ",i);
        scanf("%d",&A[i]);
    }
    
    printf("\n");
    for (int i = 0; i <5; i++)
    {
      printf("%d ",A[i]);
    }

    return 0;
}