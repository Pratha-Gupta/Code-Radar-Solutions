#include<stdio.h>
int main(){
    int n ,i,temp,j;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
        }
    }
    printf("%d %d",arr[0],arr[n-1]);
    return 0;
}