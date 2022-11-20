#include <stdio.h>

#define MAXTAM 100

int main(){
	int X[MAXTAM];
	int Y[MAXTAM];
	int n, i;
	do{
		printf("\nDigite o tamanho do vetor: \n");
		scanf("%d", &n);
		if(n < 0 || n > MAXTAM)
			printf("\nTamanho invalido.\n");
	}while(n < 0 || n > MAXTAM);
	printf("\nDigite os %d elementos do vetor: ");
	for(i = 0; i < n; i++){
		scanf("%d", &X[i]);
	}
	for(i = 0; i < n; i++){
		Y[i] = X[n - 1 - i];
	}
	for(i = 0; i < n; i++){
		printf("\nY[%d] = %d\n", i, Y[i]);
	}
	return 0;
}