#include<stdio.h>
int main(){
    int i, n ;
    int max = -1;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
        for(i=0;i<n;i++){
            if(i==n-1){
                if (arr[i]>arr[i-1]){
                    max=arr[i];
                    break;
                }    
            }
        if((arr[i] > arr[i+1])  && (arr[i]> arr[i-1])){
            max = arr[i];
            break;
        }
    
        }
        
    
    printf("%d",max);
        return 0;
}