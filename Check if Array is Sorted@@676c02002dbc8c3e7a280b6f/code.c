#include<stdio.h>
int main(){
    int i, j,n;
    scanf("%d",&n);
    int check=1;
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        if(arr[i]<arr[i+1]){
            check = 0;
        }
}
if(check==0){
    printf("Sorted\n");
}else{
    printf("Not Sorted");
}
}