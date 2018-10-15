#include <stdio.h>
#include <windows.h>
int comprobar_calificacion(int x){
	int y;
	if(x<=10 && x>=0){
		y = 1;
	}else{
		y = 0;
	}
	return y;
}
int promedio_final(int c1, int c2, int c3, int e){
	int promedio_final = (c1+c2+c3)/3, retorno;
	if(promedio_final>e){
		retorno = promedio_final;
	}else{
		retorno = e;
	}
	return retorno;
}
void tipo_alumno(){
	
}
main(){
	int repetir_alumno,repetir_programa,cal_ord_1,cal_ord_2,cal_ord_3,cal_eord,prom_gru=0,total_alumnos=0;
	do{
		do{
			system("cls");
			do{
				printf("Ingrese la primera calificación");
				scanf("%i",&cal_ord_1);
			}while(comprobar_calificacion(cal_ord_1)==0);
			do{
				printf("Ingrese la segunda calificación");
				scanf("%i",&cal_ord_2);
			}while(comprobar_calificacion(cal_ord_2)==0);
			do{
				printf("Ingrese la tercera calificación");
				scanf("%i",&cal_ord_3);
			}while(comprobar_calificacion(cal_ord_3)==0);
			do{
				printf("Ingrese la calificación extra ordinaria (en caso de no haber presentado examen extraordinario ingrese 0)");
				scanf("%i",&cal_eord);
			}while(comprobar_calificacion(cal_eord)==0);
			printf("El promedio final del alumno es de: %i \nIngrese 1 para ingresar un nuevo promedio\n",promedio_final(cal_ord_1,cal_ord_2,cal_ord_3,cal_eord));
			total_alumnos++;
			prom_gru = prom_gru + promedio_final(cal_ord_1,cal_ord_2,cal_ord_3,cal_eord);
		}while(repetir_alumno==1);
		printf("El promedio total del grupo es de: %i",prom_gru/total_alumnos);
	}while(repetir_programa==1);
}
