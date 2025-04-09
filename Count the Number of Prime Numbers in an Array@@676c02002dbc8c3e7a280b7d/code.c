#include<stdio.h>
int main(){
    int i, j, n;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int isPrime(int num){
        for(int i=0;i<=num;i++){
            if(num%2==0){
                return 1;
            }else{
                return 0;
            }
        }
    }
    int check=0;
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            check++;
        }
    }
    printf("%d",check);
}