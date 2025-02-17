#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    // Print original number in binary
    
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
    
    // Flip all bits using bitwise NOT operator
    int flipped_number = ~number;
    
    // Print flipped number in binary
    printf("Flipped number (binary): ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (flipped_number >> i) & 1);
    }
    printf("\n");

    // Print the decimal representation of the flipped number
    printf(" %d\n", flipped_number);

    return 0;
}
