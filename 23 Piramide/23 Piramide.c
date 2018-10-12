#include <stdio.h>
#include <windows.h>
main(){
	int base,contador=0,z;
	do{
		system("cls");
		printf("Ingrese la medida de la base");
		scanf("%i",&base);
		for(z=1;z<=base;z++){
			printf("*");
			contador++;
			if(contador=z){
				printf("\n");
			}
		}
	}while(z==1);
}
