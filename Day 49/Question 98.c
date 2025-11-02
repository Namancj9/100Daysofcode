#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i, len, lastSpaceIndex = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  

    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpaceIndex = i;
    }

    printf("Result: ");

    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 1; i < lastSpaceIndex; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c. ", name[i]);
    }

    if (lastSpaceIndex != -1)
        printf("%s\n", &name[lastSpaceIndex + 1]);
    else
        printf("%s\n", name); 

    return 0;
}
