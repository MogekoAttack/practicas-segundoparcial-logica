#include <stdio.h>
#include <windows.h>
int main(){
	int x,z;
	printf("Introduce el numero");
	scanf("%i",&x);
	for(z=1;z<=x;z++){
		printf("*");
	}
	system("pause");
}
