#include <stdio.h>
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[4] = {6, 7, 8, 9};
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", A[i]);
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}