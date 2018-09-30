#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void cuadxy(int x,int y){  
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
}  

void cuadro(){
	system("MODE CON cols=200 lines=40");
	int z;
	printf("%c",201);
	//Linea de hasta arriba
	for(z=3;z<=200;z++){
		printf("%c",205);
	}
	printf("%c\n",187);
	//Linea izquierda
	for(z=1;z<=20;z++){
		cuadxy(0,z);
		printf("%c",186);
	}
	//Linea derecha
	for(z=1;z<=20;z++){
		cuadxy(199,z);
		printf("%c",186);
	}
	//Liena de abajo
	cuadxy(1,187);
	printf("%c",200);
	for(z=3;z<=200;z++){
		printf("%c",205);
	}
	printf("%c",188);
}

int main(){
	cuadro();
	return 0;
}
