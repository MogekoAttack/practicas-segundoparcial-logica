#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int z=0,op;
	float x,x1;
	do{
		system("cls");
		printf("Temperaturas\n");
		printf("1.- Centigrados a Farenheit\n");
		printf("2.- Farenheit a Centigrados\n");
		printf("3.- Salir\n");
		scanf("%i",&op);
		system("cls");
		switch(op){
			case 1:
				printf("Ingresa los centigrados\n");
				scanf("%f",&x);
				printf("%f",((x+32)*1.8));
			break;
			break;
			case 2:
				printf("Ingresa los grados farenheit\n");
				scanf("%f",&x);
				printf("%f",((x-32)/1.8));
			break;
			case 3:
				printf("Salir");
			break;
			default:
				printf("Ingresa un valor correcto");
			break;
		}
		getch();
		system("cls");
		printf("Ingresa 1 para repetir");
		scanf("%i",&z);
	}while(z==1);
	return 1;
}
