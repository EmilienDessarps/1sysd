#include<stdio.h>
#include<stdlib.h>

#define BASE 10

int main(){
	int n;
	printf("Nombre : ");
	scanf("%d", &n);
    while (n > 0){
        printf("%d\n", n%BASE);
        n /= 10;
    }
    exit(0);
}