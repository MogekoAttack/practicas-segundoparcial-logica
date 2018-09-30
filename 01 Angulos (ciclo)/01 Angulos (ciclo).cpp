#include <stdio.h>
#include <conio.h>
int main(){
	//Variables
	float a;
	int opc;
	do{
		printf("Ingresa el angulo \n");
		scanf("%f",&a);
		if(a>180){
			printf("Ingresa un valor valido");
		}else if(a==180){
			printf("Llano");
		}else if(a<180 && a>90){
			printf("Obtuso");
		}else if(a==90){
			printf("Recto");
		}else if(a<90 && a>0){
			printf("Agudo");
		}else{
			printf("Algo ha sucedido");
		}
		printf("¿Tienes otro? \n(Presiona 1 para afirmar u cualquier otra cosa para cerrar esta ventana)");
		scanf("%i",&opc);
	}while(opc==1);
	return 0;
}	
