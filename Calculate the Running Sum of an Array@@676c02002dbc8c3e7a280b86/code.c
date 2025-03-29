#include<stdio.h>
int main(){
    int i, n ;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        arr[i] += arr[i];
        printf("%d ",arr[i]);
    }
}