#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Length of string = %s\n", strlen(str));

    return 0;
}
