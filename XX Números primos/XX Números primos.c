#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y,res,con=0,z=0;
	do{
		system("cls");
		printf("Introduce un número\n");
		scanf("%i",&x);
		for(y=1;y<=x;y++){
			res = x%y;
			if(res==0){
				con++;
			}
		}
		if(con==2){
			printf("Es primo\n");
		}else{
			printf("No es primo \n");
		}
		con = 0;
		printf("Introduzca 1 para repetir\n");
		scanf("%i",&z);
	}while(z==1);
	return 0;
}
