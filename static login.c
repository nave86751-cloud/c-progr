#include <stdio.h>
#include <string.h>

int main() {
    char input_username[20], input_password[20];
    char username[] = "naveen";
    char password[] = "abc123";

    printf("Enter username: ");
    scanf("%19s", input_username);

    printf("Enter password: ");
    scanf("%19s", input_password);

    if (strcmp(input_password, password) == 0) {
        printf("Login successful\n");
    } else {
        printf("Invalid password\n");
    }

    return 0;
}
