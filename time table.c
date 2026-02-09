
#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-3) to select a subject and see its time:\n");
    printf("1. Maths\n");
    printf("2. computer Science\n");
    printf("3. physics\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Subject: Maths\n");
            printf("Time: 10:00 AM - 11:30 AM\n");
            break;
        case 2:
            printf("Subject: computer Science\n");
            printf("Time: 01:00 PM - 02:30 PM\n");
            break;
        case 3:
            printf("Subject: physics\n");
            printf("Time: 03:00 PM - 04:00 PM\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            break;
    }

    return 0;
}
