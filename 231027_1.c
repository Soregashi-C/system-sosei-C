#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Please Enter Number: ");
    scanf_s("%d", &a);

    b = a * a;
    printf("Number is %d",b);

    return 0;
}