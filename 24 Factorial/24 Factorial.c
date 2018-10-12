#include <stdio.h>
#include <windows.h>
main(){
	int x,y=1,z;
	printf("Ingrese su numero");
	scanf("%i",&x);
	for(z=1;z<=x;z++){
		printf("%i ",z);
		y = y*z;
	}
	printf("= %i",y);
}
