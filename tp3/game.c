#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<time.h>

int main(){
    int secret, guess;
    int cpt = 0;
    srand(time(NULL));
    secret = rand()%10+1;
    while (guess != secret){
        printf("Entrez un nombre : ");
        scanf("%d", &guess);
        if (secret < guess){
            printf("Trop grand\n");
        }
        else{
            if (secret > guess){
                printf("Trop petit\n");
            }
        }
        cpt++;
    }
    printf("Trouvé, en ");
    printf("%d", cpt);
    printf(" coups.\n");
    exit(0);
}
