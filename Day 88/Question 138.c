#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    enum Colors c;

    for (c = RED; c <= YELLOW; c++) {
        printf("%d ", c);  
        switch (c) {
            case RED:    printf("RED\n"); break;
            case GREEN:  printf("GREEN\n"); break;
            case BLUE:   printf("BLUE\n"); break;
            case YELLOW: printf("YELLOW\n"); break;
        }
    }
    return 0;
}
