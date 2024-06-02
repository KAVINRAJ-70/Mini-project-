#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
};

struct Student students[MAX_STUDENTS];
int num_students = 0;

void addStudent() {
    if (num_students < MAX_STUDENTS) {
        printf("Enter student name: ");
        scanf("%s", students[num_students].name);
        printf("Enter student age: ");
        scanf("%d", &students[num_students].age);
        printf("Enter student GPA: ");
        scanf("%f", &students[num_students].gpa);
        num_students++;
        printf("Student added successfully!\n");
    } else {
        printf("Maximum number of students reached!\n");
    }
}

void viewStudents() {
    printf("\nList of students:\n");
    printf("Name\t\tAge\t\tGPA\n");
    for (int i = 0; i < num_students; i++) {
        printf("%s\t\t%d\t\t%.2f\n", students[i].name, students[i].age, students[i].gpa);
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        printf("College Management System\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
