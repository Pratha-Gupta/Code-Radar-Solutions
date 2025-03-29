#include<stdio.h>
int main(){
    int i, n,leader;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        for(int j =n-1 ; j>0 ; j--){
            if(arr[j]<arr[j+1]){
                leader =arr[j];
            }
        }
        printf("%d",leader);
    }
}