#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter the filename to open in append mode: ");
    scanf("%s", filename);
    getchar();  // Clear newline from buffer
    fp = fopen(filename, "a");

    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
