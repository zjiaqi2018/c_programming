/* addemup.c -- five kinds of statements */
#include <stdio.h>
int main(void) /* finds sum of first 20 integers */
{
	int count, sum; /* declaration statement */
	count = 0; /* assignment statement */
	sum = 0; 
	while (++count < 20) // compares count to 20, then increments count
    {
        sum = sum + count; /* while statement */

        printf("count = %d\n", count); /* function statement */
        printf("sum = %d\n", sum);     /* function statement */
    }
        printf("count outside loop = %d\n", count); /* function statement */
        printf("sum outside loop = %d\n", sum);     /* function statement */
    return 0; /* return statement */
}
