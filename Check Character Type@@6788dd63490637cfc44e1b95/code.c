#include <stdio.h>
#include <ctype.h>  // For character classification functions like isdigit()

int main() {
    char ch;
    scanf("%c", &ch);

    // Checking for vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    }
    // Checking for consonants (letters that are not vowels)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    }
    // Checking for digits
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // Checking for special characters
    else {
        printf("Special Character");
    }

    return 0;
}
