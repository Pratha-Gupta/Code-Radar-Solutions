#include <stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=0; j<n-i;j++){
            printf(" ");
        }
        for (int j=0; j<i*2-1;j++){
            printf("*");
        }
    printf("\n");
    }
}