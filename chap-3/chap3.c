
#include <stdio.h>

void exeample1(void)
{
	float weight; /* user weight */
	float value;  /* platinum equivalent */
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	/* get input from the user */
	scanf("%f", &weight);
	/* assume platinum is $1700 per ounce */
	/* 14.5833 converts pounds avd. to ounces troy */
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.4f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
}

/* print1.c-displays some properties of printf() */
void print1(void)
{
	int ten = 10;
	int two = 2;
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten); // forgot 2 arguments
	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
}

int main(void)
{
	print1();
	return 0;
}
