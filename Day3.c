#include <stdio.h>

void Question9(void)
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return;
    }

    if (n <= 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

void Question10(void)
{
    // Original Question10.c file contained only "#include" and no further code.
    printf("Question10 source not available.\n");
}

void Question11(void)
{
    // Original question11.c file contained only "#include" and no further code.
    printf("Question11 source not available.\n");
}

void Question12(void)
{
    // Original question12.c file was empty locally.
    printf("Question12 source not available.\n");
}

int main(void)
{
    int choice;
    printf("Select question number 9-12: ");
    if (scanf("%d", &choice) != 1)
        return 0;

    switch (choice) {
        case 9:
            Question9();
            break;
        case 10:
            Question10();
            break;
        case 11:
            Question11();
            break;
        case 12:
            Question12();
            break;
        default:
            printf("Invalid question number.\n");
            break;
    }

    return 0;
}
