#include<stdio.h>
int main(){
    int n,i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int k;
    scanf("\n%d",&k);
    k=k%n ;
    for(i=n-k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-k;i++){
        printf("%d ",arr[i]);
    }
}