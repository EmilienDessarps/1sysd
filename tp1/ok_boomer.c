#include<stdio.h>
#include<stdlib.h>

int main(){
	int age;
	printf("Âge : ");
	scanf("%d", &age);
	if (age > 42){
		printf("Ok boomer\n");
	}
	else{
		printf("Time to learn UNIX\n");
	}
	exit(0);
}
