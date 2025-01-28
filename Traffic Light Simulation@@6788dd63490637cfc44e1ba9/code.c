#include <stdio.h>
int main() {
    char sign;
    scanf("%c",&sign);
    if(sign =='R'){
        printf("Stop");
    }else if(sign=='G'){
        printf("Go\n");
    }else if(sign=='Y'){
        printf("Slow Down\n");
    }else{
        printf("Invalid Input");
    }
    return 0;
}