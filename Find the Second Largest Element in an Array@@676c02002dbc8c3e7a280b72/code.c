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
                arr[j+1]=temp;
                }
        }
        
    }for(i=0;i<=n-1;i++){
        if(n<2 && arr[n-2]==arr[n]){
            printf("-1\n");
        }
    }
    printf("%d",arr[n-2]);
}