#include<stdio.h>
int main(){
    int i, j,n;
    scanf("%d",&n);
    int check;
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        if(arr[i]<=arr[i+1]){
            check = 1;
        }else{
            check = 1 ;
        }
}
if(check=1){
    printf("Sorted\n");
}else{
    printf("Not Sorted");
}
}