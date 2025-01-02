#include <stdio.h>
int main(){
int A[5]={1,2,3,4,5};
int B[5] = {6,7,8,9,10};
int sum[5];
for (int i = 0; i <5; i++)
{
    sum[i]=A[i]+B[i];
}
for (int i = 0; i <5; i++)
{
    printf("%d ",sum[i]);
}

    return 0;
}