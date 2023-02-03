#include <stdio.h>
int main()
{
    int P,R,T,S;
    printf("Enter principle amount: ");
    scanf("%d",&P);
    printf("Enter rate: ");
    scanf("%d",&R);
    printf("Enter time: ");
    scanf("%d",&T);
    S=P*R*T/100;
    printf("Simple Interest is %d",S);
    }
