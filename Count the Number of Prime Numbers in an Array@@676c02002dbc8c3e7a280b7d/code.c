#include<stdio.h>
int main(){
    int i, j, n;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count=0;
    int check=0;
    for(i=0;i<n;i++){
        for(j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count ++;
            }
            if(count==2){
            check++;
        }
        }
        
    }
    printf("%d",check);
    
}