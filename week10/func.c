#include <stdio.h>

int sum_array(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size]; // Declare array after knowing size

    printf("Enter %d integer elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int total_sum = sum_array(numbers, size);

    printf("The sum of the array elements is: %d\n", total_sum);

    return 0;
}
