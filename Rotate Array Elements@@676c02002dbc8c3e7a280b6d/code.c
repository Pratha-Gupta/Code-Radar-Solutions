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
    int i,n,k;
    scanf("%d",&n);
    
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&k);
    k=k % n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}