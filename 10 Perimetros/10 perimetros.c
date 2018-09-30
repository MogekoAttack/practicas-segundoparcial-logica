#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int z=0,op;
	float x,x1;
	do{
		system("cls");
		printf("Perimetros\n");
		printf("1.-Cuadrado\n");
		printf("2.-Rectangulo\n");
		printf("3.-Circulo\n");
		printf("4.-Triangulo\n");
		printf("5.-Romboide\n");
		printf("6.-Salir\n");
		scanf("%i",&op);
		switch(op){
			case 1:
				printf("Introduce la base");
				scanf("%f",&x);
				printf("%f",x*4);
			break;
			case 2:
				printf("Introduce la base");
				scanf("%f",&x);
				printf("Introduce la altura");
				scanf("%f",&x1);
				printf("%f",(x*2)+(x1*2));
			break;
			case 3:
				printf("Ingresa el el diametro del circulo\n");
				scanf("%f",&x);
				printf("Area: %f",x*2*3.14);
			break;
			case 4:
				printf("Introduce la base");
				scanf("%f",&x);
				printf("Introduce la altura");
				scanf("%f",&x1);
				printf("%f",(x*x1)/2);
			break;
			case 5:
				printf("Introduce la base");
				scanf("%f",&x);
				printf("Introduce la altura");
				scanf("%f",&x1);
				printf("%f",(x*2)+(x*2));
			break;
			case 6:
				printf("bai");
				sleep(10);
			break;
			default:
				printf("Error");
			break;
		}
		getch();
		system("cls");
		printf("Ingresa 1 para repetir");
		scanf("%i",&z);
	}while(z==1);
	return 0;
}
