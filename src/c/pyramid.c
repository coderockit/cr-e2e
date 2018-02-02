#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    // PUT pin://coderockit.io/asdf/asdfasdfasdf/1.34.7
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    // ENDPIN

    // PUT pin://coderockit.io/asdf/asdfasdfasdf/1.1.1/adsf
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

    // GET pin://coderockit.io/qwer/qwerqwerqwer/2.3.5/asdfasdf
    // ENDPIN

    // no version means it will always get the latest
    // GET pin://coderockit.io/qwer/qwerqwerqwer
    // ENDPIN

    // ^2.0 means to get the latest version higher than 2.0
    // GET pin://coderockit.io/qwer/qwerqwerqwer/^2.0
    // ENDPIN

    return 0;
}