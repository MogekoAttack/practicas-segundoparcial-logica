#include <stdio.h>
#include <stdlib.h>

int main(){
    //Variables
    char a[64] = "Ingrese las horas\n", a1[64] = "Ingrese el salario por hora\n";
    char a2[64] = "Total de salario: ", a3[64] = "Número de empleados\n", a4[64] = "El salario es: ",a5[64]= "\nIngrese 1 para repetir\n";
    int ho = 0, z = 1, em = 0;
    float salt = 0, salet = 0, x = 0;
    while(z==1){
    	printf("%s",a);
    	scanf("%f",&ho);
    	printf("%s",a1);
    	scanf("%f",&salet);
    	x = ho*salet;
    	salt = salt + x;
    	em++;
		printf("%s %f",a4,salt);
		printf("%s",a5);
		scanf("%i",&z);
		x = 0;
		system("cls");
	}
	printf("%s %i",a3,em);
    return 0;
}
