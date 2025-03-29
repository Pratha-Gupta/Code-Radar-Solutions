#include<stdio.h>

int main(){
    int i, n ;
    int max=-1 ;
   
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
    int min = arr[0] ;
    for(i=1;i<=n;i++){
        if(min>arr[i]){
            min =arr[i];
        }
    }
    for(i=1;i<=n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }if(n>1){
    printf("%d %d",min,max);
    }else{
        printf("%d %d",arr[1],arr[1]);
    }
    return 0;
}