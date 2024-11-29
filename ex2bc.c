#include <stdio.h>
void main()
{
    int i,n,s;
    do{
    printf("donner un un entier ");
    scanf ("%d",&n );
    }while (n <= 0);
    s=0;
    for( i = 1; i <= n/2; i++)
    {
        if(n % i==0){
            s = s+i;
        }
    }
    if (n == s){
        printf("%d est parfait",n);
    }else{
        printf("%d n'est pat parfait",n);
    }
}