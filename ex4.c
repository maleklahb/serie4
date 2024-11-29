#include <stdio.h>
void main()
{
    int f0,f1,fn,i;
    printf("1 1 ");
    f0 = 1;
    f1 = 1;
    for (i = 2; i <= 9; i++){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        printf("%d  ",fn);
    }
    

}
