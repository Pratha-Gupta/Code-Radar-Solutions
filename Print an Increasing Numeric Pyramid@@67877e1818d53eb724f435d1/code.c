#include<stdio.h>
int main(){
    int i,j,num=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",num+j);
        }
        printf("\n");
    }
    return 0;
    
}