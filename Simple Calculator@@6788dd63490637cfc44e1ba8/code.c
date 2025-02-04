#include <stdio.h>
int main() {
    int a,b;
    char oper;
    scanf("%d %d %c",&a,&b,&oper);
    switch(oper){
        case '+':
        printf("%d",a+b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'/':
        if(!(b=0)){
            printf("%d",a/b);
        }else{
            printf("error");
        }
        break;
        default:
        printf("error");
    }

    return 0;
}