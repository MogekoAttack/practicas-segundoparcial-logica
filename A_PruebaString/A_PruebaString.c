#include <stdio.h>
//prueba sobre string
main(){
	int z,z1;
	char nombres[4][20];
	for(z=1;z<=4;z++){
		printf("Introduzca el nombre %i",z);
		scanf("%s",&nombres[z]);
		fflush(stdout);
	}
	for(z1=1;z1<=4;z1++){
		printf("%s ",nombres[z1]);
	}
}
