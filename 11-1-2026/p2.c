#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0, end;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
