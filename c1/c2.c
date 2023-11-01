#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reverseNum) {
        return 1; // It's a palindrome
    } else {
        return 0; // It's not a palindrome
    }
}

int main() {
    int number;


    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
