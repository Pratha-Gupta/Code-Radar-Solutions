#include<stdio.h>
int main(){
    int i, n ;
    scanf("%d/n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        visit[i]=0;
    }
    for(i=0;i<n;i++){
        if(visit[i]!=1){
            int count =1 ;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count ++;
                    visit[i]=1;
                }
            }
            printf("%d %d",arr[i],count);
        }

    }
}