#include <stdio.h>
#include <stdlib.h>
int main(){
	int z=0,op;
	float x,x1,x2;
	do{
		system("cls");
		printf("Areas\n");
		printf("1.- Cuadraro\n");
		printf("2.- Rectangulo\n");
		printf("3.- Circulo\n");
		printf("4.- Romboide\n");
		printf("5.- Triangulo\n");
		printf("6.- Salir\n");
		scanf("%i",&op);
		system("cls");
		switch(op){
			case 1:
				printf("Ingresa un lado");
				scanf("%f",&x);
				printf("%f",x*x);
			break;
			case 2:
				printf("Ingresa la base");
				scanf("%f",&x);
				printf("Ingresa la altura");
				scanf("%f",&x1);
				printf("%f",x*x1);
			break;
			case 3:
				printf("Ingresa el radio");
				scanf("%f",&x);
				printf("%f",(x*x)*3.14);
			break;
			case 4:
				printf("Ingresa la base");
				scanf("%f",&x);
				printf("Ingresa la altura");
				scanf("%f",&x1);
				printf("%f",x*x1);
			break;
			case 5:
				printf("Ingresa la base");
				scanf("%f",&x);
				printf("Ingresa la altura");
				scanf("%f",&x1);
				printf("%f",x*x1/2);
			break;
			case 6:
				printf("Adios");
			break;
			default:
				printf("Ingresa algo válido");
			break;
		}
		getch();
		system("cls");
		printf("Ingresa 1 para repetir");
		scanf("%i",&z);
	}while(z==1);
	return 1;
}
