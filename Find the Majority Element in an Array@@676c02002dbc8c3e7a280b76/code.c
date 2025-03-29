#include<stdio.h>
int main(){
    int i, n,count =0,num ;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count += 1;
                num=arr[i];
            }
        }
    }
    if(count>(n/2)){
        printf("%d",num);
    }else{
        printf("-1");
    }
}