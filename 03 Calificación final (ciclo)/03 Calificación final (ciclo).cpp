#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	//Variables
	float prom,cal,cal1=0,promf,promsal;
	int opc,alu=0;
	do {
		cal1 = 0;
		for(int z=1;z<=3;z++){
			printf("Ingresa la calificación");
			scanf("%f",&cal);
			if(cal>=0 && cal<10){
				if(cal>5){
					cal = cal + .5;
				}
				cal1 = cal1 + cal;
			}else{
				printf("Ingresa una calificación adecuada");
			}
		}
		prom = cal1/3;
		alu++;
		printf("¿Tines otro alumno? (1 para repetir)");
		scanf("%i",&opc);
	}while(opc==1);
	promf = prom/alu;
	printf("El promedio final es: %f",promf);
	return 0;
}
