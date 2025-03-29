#include<stdio.h>
int main(){
    int i, n,sum ;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        sum +=  arr[i];
        
        printf("%d ",sum);
    }
}