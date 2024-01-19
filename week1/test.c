#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void printdup(char str1[], char str2[]) {
    bool encountered[256] = { false }; // Assuming ASCII characters

    for (int y = 0; str2[y] != '\0'; y++) {
        encountered[str2[y]] = true;
    }

    printf("Common Characters: ");
    for (int x = 0; str1[x] != '\0'; x++) {
        if (encountered[str1[x]]) {
            printf("%c", str1[x]);
            encountered[str1[x]] = false; // Avoid duplicate printing
        }
    }
    printf("\n");
}

int main() {
    char input1[50];
    char input2[50];

    printf("String 1 = ");
    scanf("%s", input1);
    printf("String 2 = ");
    scanf("%s", input2);

    printdup(input1, input2);

    return 0;
}
