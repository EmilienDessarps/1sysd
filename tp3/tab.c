#include<stdio.h>
#include<stdlib.h>

int main(){
    int cpt;
    scanf("%d", &cpt);
    int tab[cpt], i;
    for (i=0; i<cpt; i++){
        scanf("%d", &tab[i]);
    }
    for (i=0; i<cpt; i++){
        printf("%d", tab[i]);
        printf(" ");
    }
    printf("\n");
    int min = tab[0];
    int max = tab[0];
    for (i=1; i<cpt; i++){
        if (tab[i] < min){
            min = tab[i];
        }
        if (tab[i] > max){
            max = tab[i];
        }
    }
    printf("%d", min);
    printf("\n");
    printf("%d", max);
    printf("\n");
    int moy = 0;
    for (i = 0 ; i < cpt ; i++){
        moy += tab[i];
    }
    moy /= cpt;
    printf("%d", moy);
    printf("\n");
    exit(0);
}
