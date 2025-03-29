#include<stdio.h>
int kthSmallest(int arr[],int n,int k){
    for(int i=0 ; i<n-1; i++){
        for(int j=0; j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[i];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    if(k>n){
        printf("-1");
    }else{
        printf("%d",arr[k]);
        
    }
}