#include<stdio.h>
int main(){
    int a, b ;
    scanf("%d %d",&a ,&b);
    int bit = (a>>b) & 0 ;
    printf("%d",bit);
}