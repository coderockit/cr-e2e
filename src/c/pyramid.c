#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    // BEGIN crput:/asdf/asdfasdfasdf/v1.1.1/
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
    // END crput

    // BEGIN crget:/qwer/qwerqwerqwer/v2.3.5/
    // END crget

    return 0;
}