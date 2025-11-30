#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);   
        } else {
            str[i] = tolower(str[i]);   
        }
        i++;
    }

    printf("Sentence Case: %s", str);

    return 0;
}
