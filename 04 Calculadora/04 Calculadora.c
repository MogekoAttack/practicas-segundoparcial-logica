#include <stdio.h>
#include <conio.h>
int main(){
	float x1,x2,res;
	char op;
	int z=0;
	do{
		printf("Ingresa el número");
		scanf("%f",&x1);
		printf("Ingresa la operación");
		scanf("%s",&op);
		switch(op){
			case '+':
				printf("Ingresa el número");
				scanf("%f",&x2);
				printf("%f",x1+x2);
			break;
			case '-':
				printf("Ingresa el número");
				scanf("%f",&x2);
				res = x1-x2;
				printf("%f",res);
			break;
			case '*':
				printf("Ingresa el número");
				scanf("%f",&x2);
				res = x1*x2;
				printf("%f",res);
			break;
			case 'x':
				printf("Ingresa el número");
				scanf("%f",&x2);
				res = x1*x2;
				printf("%f",res);
			break;
			case '/':
				printf("Ingresa el número");
				scanf("%f",&x2);
				res = x1/x2;
				printf("%f",res);
			break;
			default:
				printf("Ingresa algo válido");
			break;
		}
	printf("Ingresa '1' Para repetir u otra cosa para terminar");
	scanf("%i",&z);
	}while(z==1);
	return 1;
}
