#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    printf("Enter student details (Name Roll Marks): ");
    scanf("%s %d %d", s.name, &s.roll_no, &s.marks);

    printStudent(s);

    return 0;
}
