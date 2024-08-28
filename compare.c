#include <stdio.h>

/*
Multiple lines of comments


I wanna compare 3 numbers and print the highest one of them.

*/

int main(void)
{
    int num1;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    int num2;
    printf("Enter the second number\n");

    scanf("%d", &num2);
    int num3;

    printf("Enter the third number\n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("Num1 %d is the highest", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("Num2 %d is the highest", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("Num3 %d is the highest", num3);
    }
}