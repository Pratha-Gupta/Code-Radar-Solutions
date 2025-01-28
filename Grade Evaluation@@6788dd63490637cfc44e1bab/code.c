#include <stdio.h>
int main() {
    char as;
    scanf("%c",&as);
    if(as=='A'){
        printf("Excellent\n");
    }else if(as=='B'){
        printf("Good\n");
    }else if(as=='C'){
        printf("Average\n");
    }else if(as=='D'){
        printf("Below Average\n");
    }else{
        printf("Fail\n");
    }
    return 0;
}