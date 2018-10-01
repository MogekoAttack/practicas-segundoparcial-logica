#include <stdio.h>
#include <windows.h>
int main(){
	int x;
	for(x=500;x<=1000;x++){
		if(x%5==0){
			printf("%i\n",x);
		}
	}
	system("pause");
}
