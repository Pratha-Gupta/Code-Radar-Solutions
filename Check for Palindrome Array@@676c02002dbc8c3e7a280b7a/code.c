#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&n);
    }
    int j=n;
    for(int i = 1;i<j;i++;j--){
        if(arr[i]=arr[j]){
            printf("YES");
        }else{
            printf("NO");
        }

        
    }
    
}