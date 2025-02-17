#include <stdio.h>

int main() {
    int num ; // Binary: 1010
    int bit ; 
    scanf("%d",&num);
    scanf("%d",&bit);

    
    // Create a bit mask with only the nth bit set to 1
    int mask = 1 << bit;
    
    // Use the bitwise OR operator to set the nth bit
    int new_number = num | mask;

    
    printf("%d\n", new_number);

    return 0;
}
