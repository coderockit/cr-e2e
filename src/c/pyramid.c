#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    // PUT crpin://coderockit.io/asdf/asdfasdfasdf/v1.1.1/sdfsd
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
    // ENDPUT crpin

    // GET crpin://coderockit.io/qwer/qwerqwerqwer/v2.3.5/
    // ENDGET crpin

    return 0;
}