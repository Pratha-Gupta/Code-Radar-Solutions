#include<stdio.h>
int main(){
    int i, j,n;
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int check=1;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            check=0 ;
            break;
        }
}
if(check){
    printf("Sorted\n");
}else{
    printf("Not Sorted");
}
}