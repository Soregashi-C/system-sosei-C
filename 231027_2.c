#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Please Enter Number: ");
    scanf_s("%d", &a);

    if (a % 2 == 0) {
        printf("�����ł�");
    }
    else {
        printf("��ł�");
    }
   /* b = a * a;
    printf("Number is %d",b);
    */
    return 0;
}