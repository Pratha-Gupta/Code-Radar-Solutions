#include <stdio.h>
int main() {
    char s;
    scanf("%c",&s);
    switch(s){
        case'R':
        printf("Stop\n");
        break;
        case'G':
        printf("Go\n");
        break;
        case'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
        break;
    }
    return 0;
}