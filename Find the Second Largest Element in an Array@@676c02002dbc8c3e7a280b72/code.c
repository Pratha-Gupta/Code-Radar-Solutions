#include<stdio.h>
int main(){
    int i, j ,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        
        for(j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
                
            }
        }
        
    }
    printf("%d",arr[n-2]);
}