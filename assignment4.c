#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i=2;i*i<=num;i++)
   {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a,n;

    printf("Enter the lower and upper limits : ");
    scanf("%d %d", &a, &n);

    printf("Prime numbers between %d and %d are: ", a, n);
    for (int i = a; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


