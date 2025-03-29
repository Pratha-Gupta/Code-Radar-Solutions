#include<stdio.h>
int main(){
    int i, n,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>k){
            count += 1;
        }
    }
    printf("%d",count);
}