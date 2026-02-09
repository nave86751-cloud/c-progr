#include <stdio.h>

struct student {
    char name[20];
    int age;
    float total_marks;
};

int main() {
    struct student s[2];
    float avg;

    // Input details of 2 students
    for(int i = 0; i < 2; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &s[i].age);

        printf("Enter total marks of student %d: ", i + 1);
        scanf("%f", &s[i].total_marks);

        printf("\n");
    }

    // Display student details
    printf("---- Student Details ----\n");
    for(int i = 0; i < 2; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Total Marks: %.2f\n\n", s[i].total_marks);
    }

    // Calculate average marks
    avg = (s[0].total_marks + s[1].total_marks) / 2;

    printf("Average of total marks = %.2f\n", avg);

    return 0;
}
