#include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum UserRole role;
    
    printf("Select role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter role number: ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin!\n");
            break;
        case USER:
            printf("Welcome, User! \n");
            break;
        case GUEST:
            printf("Welcome, Guest!\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
