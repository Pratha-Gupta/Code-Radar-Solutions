#include<stdio.h>
int main(){
    int i,j, n ;
    scanf("%d",&n);
    for(i=0 ; i<=n-1 ; i++){
        for(j=0; j<=i ; j++){
            printf("%c ", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}