#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    // PUTPRIVATE /pin/asdf/asdfasdfasdf/1.34.7
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    // ENDPIN

    // PUT /pin/asdf/asdfasdfasdf/1.1.1/qwer:qwerqwerqwer:2.3.5
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
    // ENDPIN

    // GET /pin/qwer/qwerqwerqwer/2.3.5
    // ENDPIN

    // no version means it will always get the latest
    // GET /pin/qwer/qwerqwerqwer
    // ENDPIN

    // ^2.0 means to get the latest version higher than 2.0
    // GET /pin/qwer/qwerqwerqwer/^2.0
    // ENDPIN

    return 0;
}