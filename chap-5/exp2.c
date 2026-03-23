
#include <stdio.h>
#define SCALE 3.0
#define ADJUST 0.5
int main(void)
{
    float shoe = 2.0, foot;
    while (++shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %20.2f inches\n", shoe, foot);
    }

    return 0;
}
