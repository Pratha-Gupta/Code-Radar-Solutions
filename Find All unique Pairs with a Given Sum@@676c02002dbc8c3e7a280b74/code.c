#include<stdio.h>
int main(){
    int n, i,j ,t;
    int a , b ;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&t);
    int check = 1;
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] +arr[j]==t){
                check = 0 ;
                break;
                
            }
            a = arr[i];
            b = arr[j];
        }if(a!=arr[i] && b!=arr[j]){
            if(check ==0){
            
            printf("%d %d\n", arr[i], arr[j]);
            check =1 ;
           
        }
        }
    }

}