/* for_13s.c */
#include <stdio.h>
int main(void)
{
    int n; // count by 13s from 2
    for (n = 5; n < 60; n = n + 26)
    {
        printf("%d \n", n);
    }

    return 0;
}
