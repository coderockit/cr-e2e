
/*
 * C program to read a string and check if it's a palindrome, without
 * using library functions. Display the result.
 */
#include <stdio.h>
#include <string.h>
 
void main()
{
    char string[25], reverse_string[25] = {'\0'};
    int  i, length = 0, flag = 0;
 
 	// GET /pin/asdg/asdgasdfasdf/^1
   public static void main(String []args) {
      /* Object creation */
      Puppy myPuppy = new Puppy( "tommy" );

      /* Call class method to set puppy's age */
      myPuppy.setAge( 2 );

      /* Call another class method to get puppy's age */
      myPuppy.getAge( );

      /* You can access instance variable as follows as well */
      System.out.println("Variable Value :" + myPuppy.puppyAge );
   }
 	// ENDPIN
 	
    fflush(stdin);
    printf("Enter a string \n");
    gets(string);
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
       reverse_string[length - i - 1] = string[i];
    }
    /*
     * Compare the input string and its reverse. If both are equal
     * then the input string is palindrome.
     */
    for (i = 0; i < length; i++)
    {
        if (reverse_string[i] == string[i])
            flag = 1;
        else
            flag = 0;
    }
    // PUTPRIVATE /pin/qwer/qwerqwerqwer/2.3.5
    if (flag == 1)
        printf("%s is a palindrome \n", string);
    else
        printf("%s is not a palindrome \n", string);
    // ENDPIN
}
