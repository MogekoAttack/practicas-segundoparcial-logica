#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int z=0,op;
	float x;
	do{
		system("cls");
		printf("Ingresa la calificación");
		scanf("%f",&x);
		if(x>0 && x<=10){
			if(x<=3){
				printf("Cambiate de carrera");
			}else if(x>3 && x<=5){
				printf("Echale mas ganas");
			}else if(x>5 && x<=7){
				printf("Pasable");
			}else if(x>7 && x<=9){
				printf("Bien");
			}else{
				printf("Perfecto");
			}
		}else{
			printf("Ingresa un valor correcto");
		}
		getch();
		system("cls");
		printf("Ingresa 1 para repetir");
		scanf("%i",&z);
	}while(z==1);
	return 0;
}
