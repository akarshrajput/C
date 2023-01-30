#include <stdio.h>
int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    if (a>=18)
    printf("Eligible for vote");
    else
    printf("Not Eligible for vote");
}