#include<stdio.h>
void main()
{
    int a=10;
    int std=3;
    int left=10%3;
    printf("So %d chocolate will be left as well as 3 students will have 3 chocolates each.\n",left);
    printf("So %d chocolate will be left as well as %d students will have %d chocolates each.",(a%std),std,(a/std));
}