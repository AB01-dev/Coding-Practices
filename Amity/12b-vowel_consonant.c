#include <stdio.h>
int main()
{

    char alphabet;
    printf("Enter any alphabet: ");
    scanf("%c", &alphabet);

    if (alphabet == 'A' || alphabet == 'a'|| alphabet == 'E' || alphabet == 'e' || alphabet == 'I' || alphabet == 'i' ||
    alphabet == 'O' || alphabet == 'o' || alphabet == 'U' || alphabet == 'u') {
        printf("Entered alphabet is a vowel character\n");
    } else {
        printf("Entered alphabet is a consonant character\n");
    }

return 0;
}