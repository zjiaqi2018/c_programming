#include <stdio.h>
// main function is the first function called when the program is executed
// int is the return type of the main function
// void means that the main function does not take any input parameters
int main(void) /* a simple program */
{
    int num, _tax_rate; /* define a variable called num */
    num = 1; /* assign a value to num */

    // int _tax_rate;
    _tax_rate = 10;

    printf("I am a simple "); /* use the printf()
    function */
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);
    printf(" without tab: abcd\n");
    printf(" tab: ab\tcd\n");
    printf(" backslash: \\\n");
    printf(" double quote: \"\n");
    printf(" single quote: \'\n");
    return 0;
}