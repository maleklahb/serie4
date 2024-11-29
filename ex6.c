#include <stdio.h>
#include<math.h>
void main (){
    int n,nbr=0,dec,d,i,x;
    printf("saisir un nombre binaire ");
    scanf("%d",&n);
    x=n;
    do{
        nbr++;
        n=n/10;
        
    }while(n!=0);
    dec=0;
    for (i = 0, i < nbr ; i++)
    { 
        d=n % 10;
        dec=dec+d * pow(2,i);
        x=x/10;
    }
    
    printf("le nbr decimale est %d",dec);
}