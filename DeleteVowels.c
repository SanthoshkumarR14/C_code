#include <stdio.h>
#include <string.h>

void deleteVowels(char str[]) {
    int i, j = 0;
    char result[100];

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("String after deleting vowels: %s\n", result);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // deprecated, you may use fgets(str, sizeof(str), stdin);
    deleteVowels(str);
    return 0;
}

