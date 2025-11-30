#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("input.txt", "r");

    outFile = fopen("output.txt", "w");
    
    while ((ch = fgetc(inFile)) != EOF) {
        ch = toupper(ch);      
        fputc(ch, outFile);    
    }
    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete! Check output.txt\n");

    return 0;
}
