#include<stdio.h>
int main(){
    int i, n ;
    int max ;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n=1 || arr[0]>arr[1]){
        max= arr[0];
    }
    for(i=0;i<n;i++){
        if((arr[i] > arr[i+1])  && (arr[i]> arr[i-1])){
            max = arr[i];
        }
        }
        printf("%d",max);
        return 0;
}