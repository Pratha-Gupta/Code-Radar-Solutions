#include<stdio.h>
int fibonacciSeries(int n){
    int  first=0 ;second=1;next;i;
    for(i=0;i<n;i++){
        if(i<=1){
            next =i ;
        }else{
            next = first +second ;
            first =second;
            second =next;
        }
        printf("%d\n",next);
    }
    return 0;
}