#include<stdio.h>
int main(){
    int n , k,i ;
    scanf("%d\n",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d\n",&arr[n]);
    }
    scanf("%d\n",&k);
    k=k%n ;
    for(i=n-k;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    for(i=1;i<n-k;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}