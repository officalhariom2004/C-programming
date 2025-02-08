#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {

    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }
    return true;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}