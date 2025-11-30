#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;

    int g;
    printf("Enter Gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &g);
    p.gender = g;

    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}
