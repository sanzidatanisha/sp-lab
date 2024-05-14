#include <stdio.h>

int main() {
    int a,i, n, sum = 0, count = 0;
    float average;

    printf("Enter the start and end values of the range : ");
    scanf("%d %d", &a, &n);

    for ( i = a; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
            count++;
        }
    }

    if (count != 0) {
        average = (float)sum / count;
        printf("Sum of odd numbers between %d and %d: %d\n", a, n, sum);
        printf("Average of odd numbers between %d and %d: %.2f\n", a, n, average);
    } else {
        printf("No odd numbers found between %d and %d\n", a, n);
    }

    return 0;
}


