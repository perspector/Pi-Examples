#include<stdio.h>
#include<stdlib.h>
printf("How many digits of pi do you want to know? ");
scanf("%d",&i)
double F (int i) {
    return 1 + i / (2.0 * i + 1) * F(i + 1);
}
PI = 2 * F(1);
