#include <stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("Enter the celcius : ");
    scanf("%f",&celcius);

    fahrenheit = (celcius*9/5)+32;
    printf("fahrenheit = %.2f F",fahrenheit);

    return 0;
}