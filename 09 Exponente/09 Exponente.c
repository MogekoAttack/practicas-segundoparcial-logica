#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int z;
	float x;
	printf("Introduce un numero\n");
	scanf("%f",&x);
	printf("Introduce el exponente\n");
	scanf("%i",&z);
	while(z>0){
		x = x*z;
		printf("%f \n",x);
		z--;
	}
	getch();
	return 1;
}
