#include<stdio.h>
int main(){
    int i, n , arr[n];
    int max=-1 ;
    int min = arr[0];
    scanf("%d",&n):
    for(i=1;i<=n;i++){
        scanf("%d ",&arr[i])
    }
    for(i+1;i<=n;i++){
        if(min>arr[i]){
            min =arr[i];
        }
    }
    for(i+1;i<=n;i++){
        if(min<arr[i]){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}