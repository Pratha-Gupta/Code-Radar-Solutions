#include <stdio.h>
int main() {
    char sign;
    scanf("%c",&sign);
    if(sign==R){
        printf("Stop");
    }else if(sign==G){
        printf("Go");
    }else if(sign==Y){
        printf("Slow Down");
    }else{
        printf("Invalid Input");
    }
    return 0;
}