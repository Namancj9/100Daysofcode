#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, i, topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter details of student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }
    printf("Topper: %s (Marks: %d)\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}
