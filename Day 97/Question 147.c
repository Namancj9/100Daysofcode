#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    FILE *fp;

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Employee data saved to employee.dat\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Employee empRead;
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Read from file:\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           empRead.name, empRead.id,
           empRead.joiningDate.day,
           empRead.joiningDate.month,
           empRead.joiningDate.year);

    return 0;
}
