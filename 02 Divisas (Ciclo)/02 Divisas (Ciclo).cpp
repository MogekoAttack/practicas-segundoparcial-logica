#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	//Variables
	float dls,mxn,eur;
	int opc,z;
	do{
		printf("¿Qué tipo de valor quieres convertir?\n1.-DLS a MXN\n2.-MXN a DLS\n3.-EUR a MXN\n4.-MXN a EUR\n5.-EUR a DLS\n6.-DLS a EUR\n7.-Salir");
		scanf("%i",&opc);
		system("cls");
		switch(opc){
			case 1:
				printf("Ingresa el valor del dolar\n");
				scanf("%f",&dls);
				printf("Ingresa la cantidad a convertir\n");
				scanf("%f",&mxn);
				printf("%f\n",mxn/dls);
			break;
			case 2:
				printf("Ingresa el valor del dolar\n");
				scanf("%f",&dls);
				printf("Ingresa la cantidad a convertir\n");
				scanf("%f",&mxn);
				printf("%f\n",mxn*dls);
			break;
			case 3:
				printf("Ingresa el valor del euro\n");
				scanf("%f",&eur);
				printf("Ingresa la cantidad a convertir\n");
				scanf("%f",&mxn);
				printf("%f\n",mxn/eur);
			break;
			case 4:
				printf("Ingresa el valor del euro\n");
				scanf("%f",&eur);
				printf("Ingresa la cantidad a convertir\n");
				scanf("%f",&mxn);
				printf("%f\n",mxn*eur);
			break;
			case 5:
				printf("Ingresa el valor del euro\n");
				scanf("%f",&eur);
				printf("Ingresa la cantidad a convertir\n");
				scanf("%f",&dls);
				printf("%f\n",dls*eur);
			break;
			case 6:
				printf("Ingresa el valor del euro\n");
				scanf("%f",&eur);
				printf("Ingresa la cantidad a convertir\n");
				scanf("%f",&dls);
				printf("%f\n",dls*eur);
			break;
			case 7:
			break;
			default:
				printf("Ingresa cualquier valor valido\n");
			break;
		}
		system("cls");
		printf("¿Otra vez?\n(Ingresa 1 para repetir)");
		system("cls");
		scanf("%i",&z);
		system("cls");
	}while(z==1);
	return 0;
}
