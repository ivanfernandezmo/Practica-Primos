#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	
	int numero, resultat, divisor;
	bool esPrimer=true;

	do{
		printf("Introdueix un numero (50..1000): ");
		scanf("%d",&numero);
	}while(numero<50 || numero>1000);

	int i=numero-1;
	while(i>1){
		resultat=numero%i;
		if(resultat==0){
			esPrimer=false;
			divisor=i;
		}else{
			
		}
		i--;
	}

	if(esPrimer==false){
		printf("El numero: %d NO es primer. El seu divisor més petit es: %d", numero, divisor);
	}else{
		printf("El numero %d es primer.", numero);
	}
	
	acabament();
	return 0;
}
