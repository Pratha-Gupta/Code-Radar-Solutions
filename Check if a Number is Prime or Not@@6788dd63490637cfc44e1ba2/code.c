#include <stdio.h>

int main() {
    int number, i;
    int is_prime = 1; // Assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        is_prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 to the square root of the number
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = 0; // The number has a factor, so it is not prime
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
