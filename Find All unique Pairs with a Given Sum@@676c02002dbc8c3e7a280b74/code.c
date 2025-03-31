#include<stdio.h>
int main(){
    int n, i,j ,t;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&t);
    int check = 1;
    for(i=0;i<=n-1;i++){
        for(j=1;j<=n-1;j++){
            if(arr[i] +arr[j]!=t){
                check = 0 ;
                break;
                
            }
        }
        if(check){
            printf("%d %d\n", arr[i], arr[j]);
        }
    }

}