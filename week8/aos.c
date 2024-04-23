#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int Palindrome = 0;
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            Palindrome = 1;
            break;
        }
    }

    if (Palindrome)
        printf("Not a Palindrome\n");
    else
        printf("is a Palindrome\n");

    return 0;
}
