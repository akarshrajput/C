#include <stdio.h>
int main() 
{	
    char s[100];
    printf("Write string here: ");
    scanf("%[^\n]%*c", &s); 	
    printf("Hello, World!\n");
    printf("%s",s);
    return 0;
}