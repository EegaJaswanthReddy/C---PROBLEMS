#include <stdio.h>
#include <string.h>
int main() {
    char source[50], destination[50];
    printf("Enter a string: ");
    scanf("%s", source);
    strcpy(destination, source);
    printf("Copied string: %s", destination);
    return 0;
}
