#include <stdio.h>
#include <stdlib.h>

int main() {
    char path[100];
    printf("Enter the path of a file to open:");
    scanf("%s",path);
    system(path);

    return 0;
}


