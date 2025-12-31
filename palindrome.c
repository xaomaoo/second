#include <stdio.h>

int main()
{
    int num, og, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    og = num;   // store original number

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (og== rev)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");

    return 0;
}
