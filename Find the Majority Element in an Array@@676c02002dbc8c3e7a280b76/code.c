#include<stdio.h>
int main(){
    int i,j, n,count1 =1,  num ;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        int count2 = 0;
        for(j=i;j<n;j++){
            if(arr[i]==arr[j]){
                count2 += 1;
                
            }
        }if(count1 < count2){
            count1 = count2;
            num = arr[i] ;
            
        }
    }
    if(count1>=(n/2)){
        printf("%d",num);
    }else{
        printf("-1");
    }
}