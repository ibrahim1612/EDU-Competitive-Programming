#include <stdio.h>
int main()
{
    int A,H,count=0;
    scanf("%d %d",&H,&A);
    while(H>0)
    {
        H=H-A;
        count++;
    }
    
    printf("%d\n",count);
    return 0;
}
