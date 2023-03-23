// Created by gregusich on 23.03.2023.
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter three numbers: ");
    scanf("%d  %d  %d", &a, &b, &c);
    printf("%d     %d     %d", a, b, c);
    d = a + b + c;
    printf("\n%d+%d+%d=%d", a, b, c, d);
    printf("\nEnter three numbers: ");
    scanf("%d  %d  %d", &a, &b, &c);
    printf("%d     %d     %d", a, b, c);
    d = a + b + c;
    printf("\n%d+%d+%d=%d", a, b, c, d);
    e = a * b * c;
    printf("\n%d*%d*%d=%d", a, b, c, e);
    float f;
    printf("\nEnter three numbers: ");
    scanf("%d  %d  %d", &a, &b, &c);
    printf("%d     %d     %d", a, b, c);
    d = a + b + c;
    printf("\n%d+%d+%d=%d", a, b, c, d);
    e = a * b * c;
    printf("\n%d*%d*%d=%d", a, b, c, e);
    f = d / 3;
    printf("\n(%d+%d+%d)/3=%f", a, b, c, f);
    return 0;
}
