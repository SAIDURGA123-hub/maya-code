#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sentence[100];

    // Input character
    scanf("%c", &ch);

    // Input string
    scanf("%s", str);

    // Clear newline before reading sentence
    scanf("\n");

    // Input sentence
    scanf("%[^\n]%*c", sentence);

    // Output
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);

    return 0;
}

