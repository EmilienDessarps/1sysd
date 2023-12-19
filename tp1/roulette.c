#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<time.h>

int main(){
    int secret, guess;
    srand(time(NULL));
    secret = rand()%10+1;
    scanf("%d", &guess);
    if (secret < guess){
        printf("Allons, allons, du calme...\n");
    }
    else{
        if (secret > guess){
            printf("C'est pas la taille qui compte, mais un peu plus quand même\n");
        }
        else{
            printf("Félicitations ! Quel talent !\n");
        }
    }
    printf(secret);
}
