#include <stdio.h>
int main(){
	//Variables para calcular los espacios
	int es=0,z1,con1,con2=1,asp;
	//Varible para calcular los asteriscos
	int as,z,con=0;
	scanf("%i",&as);
	if((es%2)!=0){
		es = es+1;
	}
	es = as;
	con1 = es;
	for(z = 1;z<=as;z=z+2){
		while(con2>0){
			for(asp = con1;asp>=0;asp--){
				printf(" ");
			}
			con2 = 0;
		}
		printf("*");
		con++;
		if(con==z){
			printf("\n");
			con = 0;
			for(z1=es;z1>0;z1--){
				printf(" ");
			}
			es--;
		}else{
			z=z-2;
			//printf("%i %i",con,z);
			//getch();
		}
	}
	return 0;
}
//PROGRAMA REALIZADO POR MIGUEL
