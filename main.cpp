#include <iostream>

int main() {
    printf("Task 1.1\n");
    for (int i = 0; i < 9; i++) {
        printf("Hello\n");
    }

    int n;

    printf("Task 1.2\n");
    n = 0;
    while (n < 15) {
        printf("%i\n", n);
        n++;
    }

    printf("Task 1.3\n");
    n = 0;
    while (n < 15) {
        if (n % 2 == 1) {
            printf("%i\n", n);
        }
        n++;
    }

    printf("Task 2\n");
    int sum = 0;
    for (n = 5; n <= 15; n++) {
        sum += n;
    }
    printf("%i\n", sum);

    return 0;
}
