#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(num & (1 << 31)==1){
        printf("Set\n");
    }else{
        printf("Not Set");
    }
    return 0;
}