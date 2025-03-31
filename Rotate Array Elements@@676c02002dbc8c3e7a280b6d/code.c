#include<stdio.h>
int main(){
    int n ,i ;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n ;
    for(i=n-k;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(i=1;i<n-k;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}