#include<stdio.h>
void reverse(int arr[],int a, int b){
    int j =b;
    for(int i =a;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n,i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&k);
    reverse(arr,0,k);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}