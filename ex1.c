#include <stdio.h>
void main(){
    int nbn;
    float note,max,min,s,moy;
    do{
    printf("saisir le nombre des notes ");
    scanf("%d",&nbn);}
    while(nbn <= 1);
    s=0;
    max=-1;
    min=21;
    for(int i = 0 ;i <= nbn-1 ;i++){
        do{
            printf("saisir le note ");
            scanf("%f",&note);
        }while(note < 0 && note > 20);
        s=s + note;
        if(note > max){
            max=note;
        }
        if(note < min){
            min=note;
        }}
        moy=s/nbn;
        printf("la mouvaise note est %f",min);
        printf("la meilleure note est %f",max);
        printf("la moyenne de toutes les nottes est %f",moy);
}