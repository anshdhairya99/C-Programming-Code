/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern then print the pattern accordingly
*
**
***
**** -> triangular star pattern

****
***
**
* -> Inversed triangular star pattern
*/
#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        reversestarpattern(rows);
        break;
    default:
        printf("You have entered an invalid choice");
        break;
    }

    return 0;
}
