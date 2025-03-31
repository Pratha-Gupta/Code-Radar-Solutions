#include<stdio.h>
int main(){
    int i, j ,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
        }
        
        
    }
    int check = -1 ;
    for(i=n-1;i>=0;i++){
        if(arr[0]!=arr[i] ){
            check =arr[i];
            break;
        }
       
    printf("%d",check);
}
}