#include <stdio.h>
int main() {
    char s;
    scanf("%c",&s);
    if(s =='R'){
        printf("Stop");
    }else if(s =='G'){
        printf("Go\n");
    }else if(s =='Y'){
        printf("Slow Down\n");
    }else{
        printf("Invalid Input\n");
    }
    return 0;
}