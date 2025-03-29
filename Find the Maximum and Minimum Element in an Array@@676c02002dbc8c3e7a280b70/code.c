#include<stdio.h>
int main(){
    int i, n ;
    int max=-1 ;
   
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
     int min = arr[0];
    for(i=1;i<=n;i++){
        if(min>arr[i]){
            min =arr[i];
        }
    }
    for(i=1;i<=n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}