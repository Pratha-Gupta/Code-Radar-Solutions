#include <stdio.h>
int main() {
    char letter;
    scanf("%c",&letter);
    if(isupper(letter)){
        printf("Uppercase");
    }else if(islower(letter)){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}