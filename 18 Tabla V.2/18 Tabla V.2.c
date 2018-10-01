#include <stdio.h>
#include <windows.h>
int main(){
	int x,z;
	printf("Introduce el numero");
	scanf("%i",&x);
	printf("Introduce hasta donde");
	scanf("%i",&z);
	for(z=1;z<=x;z++){
		printf("%i \n",x*z);
	}
	system("pause");
}
