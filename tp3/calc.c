#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char c;
    int n1, n2;
    scanf("%d", &n1);
    scanf(" %c", &c);
    scanf("%d", &n2);
    switch (c){
        case '+':
            printf("%d", n1+n2);
            break;
        case '-':
            printf("%d", n1-n2);
            break;
        case '*':
            printf("%d", n1*n2);
            break;
        case '/':
            printf("%d", n1/n2);
            break;
    }
    printf("\n");
    exit(0);
}