#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev_str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(rev_str, str); 
    strrev(rev_str);      

    if (strcmp(str, rev_str) == 0)
        printf("Is a Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
