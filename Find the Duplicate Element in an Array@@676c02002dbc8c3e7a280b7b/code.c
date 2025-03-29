#include<stdio.h>
int main(){
    int i,j,n, num;
    scanf("%d ",&n);
    int arr[n];
    for(i=0;i<;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]== arr[j]){
                num = arr[i];
                break;

            }
        }
        printf("%d",num);
    }
}