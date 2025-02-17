#include <stdio.h>

int main() {
    int n, sum = 0;
    
    
    scanf("%d", &n);
    
    // Use a loop to calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    // Print the result
    printf("%d\n",  sum);

    return 0;
}
