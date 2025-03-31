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
    int check = 1 ;
    for(i=0;i<=n-1;i++){
        if(n<2 || arr[i]==arr[i+1]){
            check =0;
        }
    }if(check == 1 ){
         printf("%d",arr[1]);
    
    }else{
        printf("-1\n");
    }
}