#include <stdio.h>
#include <conio.h>
#include <windows.h>
void menu(){
	printf("1.- MXN a DLS\n");
	printf("2.- MXN a EUR\n");
	printf("3.- EUR a MXN\n");
	printf("4.- EUR a DLS\n");
	printf("5.- DLS a MXN\n");
	printf("6.- DLS a EUR\n");
}
void dls_mxn(){
	float x,y;
	printf("Ingresa el valor de dls");
	scanf("%f",&x);
	printf("Ingresa el valor de mxn");
	scanf("%f",&y);
	printf("El resultado es: %f",x/y);
}
void mxn_dls(){
	float x,y;
	printf("Ingresa el valor de dls");
	scanf("%f",&x);
	printf("Ingresa el valor de mxn");
	scanf("%f",&y);
	printf("El resultado es: %f",x/y);
}
void mxn_eur(){
	float x,y;
	printf("Ingresa el valor de mxn");
	scanf("%f",&x);
	printf("Ingresa el valor de eur");
	scanf("%f",&y);
	printf("El resultado es: %f",x/y);
}
void eur_dls(){
	float x,y;
	printf("Ingresa el valor de eur");
	scanf("%f",&x);
	printf("Ingresa el valor de mxn");
	scanf("%f",&y);
	printf("El resultado es: %f",x/y);
}
void dls_eur(){
	float x,y;
	printf("Ingresa el valor de dls");
	scanf("%f",&x);
	printf("Ingresa el valor de eur");
	scanf("%f",&y);
	printf("El resultado es: %f",x/y);
}
void eur_mxn(){
	float x,y;
	printf("Ingresa el valor de eur");
	scanf("%f",&x);
	printf("Ingresa el valor de mxn");
	scanf("%f",&y);
	printf("El resultado es: %f",x/y);
}
main(){
	int opc,z;
	do{
		system("cls");
		menu();
		scanf("%i",&opc);
		switch(opc){
			case 1:
				mxn_dls();
			break;
			case 2:
				mxn_eur();
			break;
			case 3:
				eur_mxn();
			break;
			case 4:
				eur_dls();
			break;
			case 5:
				dls_mxn();
			break;
			case 6:
				dls_eur();
			break;
		}
		printf("Presione 1 para repetir");
		scanf("%i",&z);
	}while(z==1);
}
