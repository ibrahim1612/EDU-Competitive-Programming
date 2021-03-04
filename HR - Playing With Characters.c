#include <stdio.h>

int main() 
{
    char ch,s[20],sen[100];
    scanf("%c",&ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s\n",ch,s,sen);
    return 0;
    
    
}
