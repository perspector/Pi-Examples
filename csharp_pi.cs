#include <stdio.h>
printf("How many digits of pi would you like to know? ");
scanf("%d",&n)
double F (int n) {
    return 1 + n / (2.0 * n + 1) * F(n + 1);
}
PI = 2 * F(1);
