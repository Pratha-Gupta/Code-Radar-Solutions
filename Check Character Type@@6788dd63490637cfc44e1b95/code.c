#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit\n", ch);
    }
    // Check if the character is an alphabetic letter
    else if (isalpha(ch)) {
        // Check if the character is a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n", ch);
        }
        // If it's an alphabetic letter and not a vowel, it's a consonant
        else {
            printf("Consonant\n", ch);
        }
    }
    // If it's not a digit or an alphabetic letter, it must be a special character
    else {
        printf("Special Character\n", ch);
    }

    return 0;
}
