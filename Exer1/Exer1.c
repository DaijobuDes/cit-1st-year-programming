#include <stdio.h>

int getNum();
// -	returns an integer entered by the user.
void display(int a, int b, int c);
// -	displays the histogram below.

int main()
{
    int a, b, c;

    printf("Please enter value for A: ");
    a = getNum();
    printf("Please enter value for B: ");
    b = getNum();
    printf("Please enter value for C: ");
    c = getNum();

    // printf("\nValues: %d %d %d", a, b, c);

    display(a, b, c);

    return 0;
}

int getNum()
{
    int num;
    scanf("%d", &num);
    return num;
}

void display(int a, int b, int c)
{
    int i, max = 0, x = 0, y = 0, z = 0;

    if (a > b)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;

    // Check max
    // printf("\nMax: %d\n", max);

    printf("%d %d %d\n", a, b, c);

    for (i = 0; i < max; i++)
    {
        // * X @
        if (x < a)
        {
            printf("*");
            x++;
        }
        else printf(" ");
        printf(" "); 

        if (y < b)
        {
            printf("X");
            y++;
        }
        else printf(" ");
        printf(" ");

        if (z < c)
        {
            printf("@");
            z++;
        }
        else printf(" ");
        printf(" ");
        printf("\n");
    }
}