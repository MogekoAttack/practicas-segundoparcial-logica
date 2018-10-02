#include <stdio.h>
#include <windows.h>
int main(){
	int x,z;
	printf("Introduce el numero");
	scanf("%i",&x);
	for(z=1;z<=10;z++){
		printf("%i \n",x*z);
	}
	system("pause");
}
