#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *wordStart = NULL, *temp = str;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    while (1) {
        if (wordStart == NULL && *temp != ' ' && *temp != '\0') {
            wordStart = temp;  
        }

        if ((wordStart && (*temp == ' ' || *temp == '\0'))) {
            reverseWord(wordStart, temp - 1); 
            wordStart = NULL;
        }

        if (*temp == '\0')
            break;

        temp++;
    }

    printf("Reversed words: %s\n", str);

    return 0;
}
