#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int z=0,op;
	printf("¿Cuantos '*' quieres?");
	scanf("%i",&op);
	while(op>0){
		printf("*");
		op--;
	}
	getch();
	return 1;
}
