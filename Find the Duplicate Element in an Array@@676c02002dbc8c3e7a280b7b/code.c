#include<stdio.h>
int main(){
    int i,j,n, num;
    scanf("%d ",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]== arr[j]){
                num = arr[i];
                
                break;

            }
        }
        
        
    }
    printf("%d", num);
     
}