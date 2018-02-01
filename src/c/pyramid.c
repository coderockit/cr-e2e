#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    // PUT cri://coderockit.io/asdf/asdfasdfasdf/1.1.1/adsf
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
    // END cri

    // GET cri://coderockit.io/qwer/qwerqwerqwer/2.3.5/asdfasdf
    // END cri

    // no version means it will always get the latest
    // GET cri://coderockit.io/qwer/qwerqwerqwer
    // END cri

    // ^2.0 means to get the latest version higher than 2.0
    // GET cri://coderockit.io/qwer/qwerqwerqwer/^2.0
    // END cri

    return 0;
}