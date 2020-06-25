#include <iostream>

int main()
{
    char a[10];
    char b[10];

    printf("Input a text: ");
    scanf("%s", &a);
    printf("Input another text: ");
    scanf("%s", &b);

    printf("Conbined Text: %s%s", a, b);

    return 0;
}