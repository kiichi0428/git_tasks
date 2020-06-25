#include <iostream>

int main()
{
    int a;
    int b;

    printf("Input an integer: ");
    scanf("%d", &a);
    printf("Input another integer: ");
    scanf("%d", &b);

    int c = a+b;

    printf("sum: %d", c);

    return 0;
}