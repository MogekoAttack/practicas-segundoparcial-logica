#include <stdio.h>
#include <windows.h>
int main(){
	int x,z;
	char y;
	printf("Ingrese el simbolo");
	scanf("%c",&y);
	printf("Ingrese las veces");
	scanf("%i",&x);
	for(z=1;z<=x;z++){
		printf("%c",y);
	}
	system("pause");
}
