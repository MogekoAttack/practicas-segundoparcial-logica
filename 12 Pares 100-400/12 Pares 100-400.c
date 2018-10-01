#include <stdio.h>
#include <windows.h>
int main(){
	int x;
	for(x=100;x<=400;x++){
		if(x%2==0){
			printf("%i\n",x);
		}
	}
	system("pause");
}
