#include<stdio.h>
int main(){
    int i,n ,k;
    int count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(k=arr[i]){
            count += 1 ;
            printf("%d",count);
           

        }
    }
    printf("%d",count);
}