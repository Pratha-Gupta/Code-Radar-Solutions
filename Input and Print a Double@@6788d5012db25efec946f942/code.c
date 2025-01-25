#include <stdio.h>
int main() {
    double num;
    scanf("%.1000lf",&num);
    printf("You entered: %1000lf",num);
    
    return 0;
}