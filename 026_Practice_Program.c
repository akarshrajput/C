#include <stdio.h>
int main()
{
    int x=1,y=0, z=5;
    int a=x&&y||z++;
    int b=x&&y&&z++;
    printf("%d",a);
    printf("%d",b);
    }
