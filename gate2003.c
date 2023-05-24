#include <stdio.h>
 #define print2(x,y) printf("%d %d ", x, y)
#define print(x) printf("%d ", x)


int x;
void Q(int z)
{
    z += x;
    print2(z,z);
}
void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    print(x);
}
main(void)
{
    x = 5;
    P(&x);
    print(x);
}