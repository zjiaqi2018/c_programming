/* typesize.c -- prints out type sizes */
#include <stdio.h>
int main(void)
{
	/* c99 provides a %zd specifier for sizes */
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type double has a size of %zd bytes.\n",sizeof(double));
	printf("Type long double has a size of %zd bytes.\n",sizeof (long double));
    printf(" Type float has a size of %zd bytes.\n", sizeof(float));

    float a = 1.0;
    printf("The variable a has a size of %zd bytes.\n", sizeof(a));

    int cost = 12.99; /* initializing an int to a double */
    float pi = 3.1415926536; /* initializing a float to a double */
    printf("The value of cost is %d", cost);
    printf("The value of pi is %f", pi);
    
return 0;
}
