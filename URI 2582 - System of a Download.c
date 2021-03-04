#include <stdio.h>
 
int main() {
    int a,b,n,i;
    char *c[11]={"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
       scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            printf("%s\n",c[a+b]);
        }

    
    
    return 0;
}
