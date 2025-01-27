#include <stdio.h>
int main() {
    char as;
    scanf("%c",&as);
    if(as==A){
        printf("Excellent");
    }else if(as==B){
        printf("Good");
    }else if(as==C){
        printf("Average");
    }else if(as==D){
        printf("Below Average");
    }else{
        printf("False");
    }
    return 0;
}