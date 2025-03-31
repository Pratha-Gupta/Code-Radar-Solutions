#include<stdio.h>
int main(){
    int n,i;
    scanf("%d\n",&n);
    int check=1;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count=0;
    for(i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            count ;
        }else if(arr[i]>arr[i+1]){
            count ;
        }
    }
    if(count){
        printf("YES\n");
    }else{
        printf("NO");
    }
}