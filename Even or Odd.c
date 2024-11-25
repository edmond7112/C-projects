
#include <stdio.h>

void checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}

int main() {
    int num;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    checkEvenOrOdd(num);

    return 0;
}