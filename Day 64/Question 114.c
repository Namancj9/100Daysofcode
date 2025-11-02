#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int lastIndex[256];  
    
    int i, start = 0, maxLen = 0, len;

    printf("Enter the string: ");
    scanf("%s", s);

    len = strlen(s);

    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (i = 0; i < len; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
