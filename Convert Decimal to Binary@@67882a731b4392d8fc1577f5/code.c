#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    // Size of an integer in bits
    int size = sizeof(int) * 8;
    
    
    unsigned int mask = 1 << (size - 1);
    
    
    
    // Loop through all the bits
    for (int i = 0; i < size; i++) {
        // Use bitwise AND to check if the current bit is 1 or 0
        if (number & mask) {
            printf("1");
        } else {
            printf("0");
        }
        // Shift the mask to the right by one bit
        mask >>= 1;
    }
    printf("\n");

    return 0;
}
