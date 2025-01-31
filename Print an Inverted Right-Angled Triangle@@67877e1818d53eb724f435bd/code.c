#include <stdio.h>
int main() {
    int s;
    scanf("%d",&s);
    for(int i=s ; i>=1; i--){
        for(int j=1;j<=s; j++){
            printf("* ",i,j);
        }printf("\n");
    }
    return 0;
}