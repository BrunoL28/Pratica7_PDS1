#include <stdio.h>

#define MAXTAM 1000

int main(){
	int fib;
	double termo[MAXTAM];
	termo[0] = 1;
	termo[1] = 1;
	do{
		printf("\nDigite um valor para o qual a sequencia de Fibonacci sera calculada: \n");
		scanf("%d", &fib);
		if(fib >= 0 && fib <= MAXTAM){
			for(int i = 2; i <= fib; i++)
				termo[i] = termo[i-1] + termo[i-2];
			printf("\nO fib(%d) = %4.3e\n", fib, termo[fib]);
		}
		else
			printf("\nFim da execucao.\n");
	}while(fib >= 0 && fib <= MAXTAM);
	return 0;
}
	
		
	