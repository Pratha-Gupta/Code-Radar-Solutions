#include<stdio.h>
int main(){
    int i, n ;
    int max = -1;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(max <arr[i]){
            max = arr[i];
        }
        }
        printf("%d",max);
        return 0;
}