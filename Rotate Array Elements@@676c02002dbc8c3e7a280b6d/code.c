#include<stdio.h>
int main(){
    int n ,i ;
    scanf("%d\n",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[n]);
    }
    int k;
    scanf("%d\n",&k);
    k=k%n ;
    for(i=n-k;i<=n-1;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<n-k;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}