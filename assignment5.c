#include <stdio.h>

int main() {
    int i, size;
    float sum = 0, average;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / size;

    printf("Sum of array elements: %.2f\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}


