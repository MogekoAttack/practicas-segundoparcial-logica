#include <stdio.h>
#include <windows.h>
int menu(){
	int z;
	printf("1.- Cuadraro\n");
	printf("2.- Rectangulo\n");
	printf("3.- Circulo\n");
	printf("4.- Romboide\n");
	printf("5.- Triangulo\n");
	scanf("%i",&z);
	return z;
}
void cuadrado(){
	float x;
	printf("Ingresa un lado");
	scanf("%f",&x);
	printf("%f",x*x);
}
void rectangulo(){
	float x,x1,x2;
	printf("Ingresa la base");
	scanf("%f",&x);
	printf("Ingresa la altura");
	scanf("%f",&x1);
	printf("%f",x*x1);
}

void circulo(){
	float x,x1,x2;
	printf("Ingresa el radio");
	scanf("%f",&x);
	printf("%f",(x*x)*3.14);
}
void romboide(){
	float x,x1,x2;
	printf("Ingresa la base");
	scanf("%f",&x);
	printf("Ingresa la altura");
	scanf("%f",&x1);
	printf("%f",x*x1);
}
void triangulo(){
	float x,x1,x2;
	printf("Ingresa la base");
	scanf("%f",&x);
	printf("Ingresa la altura");
	scanf("%f",&x1);
	printf("%f",x*x1/2);
}

int main(){
	int z;
	z=menu();
	switch(z){
		case 1:
			cuadrado();
		break;
		case 2:
			rectangulo();
		break;
		case 3:
			circulo();
		break;
		case 4:
			romboide();
		break;
		case 5:
			triangulo();
		break;
	}
}
