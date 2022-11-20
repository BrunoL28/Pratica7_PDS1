#include <stdio.h>
#include <stdlib.h>

#define DEF_TAM 60

int main(){
	int X[DEF_TAM];
	int Y[DEF_TAM];
	int U[2*DEF_TAM];
	int atual = 0;
	int iguais = 0;
	int numero;
	int i, j;
	for(i = 0; i < DEF_TAM; i++){
		do{
			X[i] = rand();
		}while(X[i] > 365 || X[i] < 0);
		do{
			Y[i] = rand();
		}while(Y[i] > 365 || Y[i] < 0);
	}
	for(i = 0; i < DEF_TAM; i++){
		numero = X[i];
		iguais = 0;
	}
	for(j = 0; j < atual; j++){
		if(numero == U[i]){
			iguais = 1;
		break;
		}
	}
	if(!iguais){
		U[atual] = numero;
	atual++;
	}
	numero = Y[i];
		iguais = 0;
	for(j = 0; j < atual; j++){
		if(numero == U[i]){
			iguais = 1;
		break;
		}
	}
	if(!iguais){
		U[atual] = numero;
	atual++;
	}
	printf("\nVetor Uniao:\n");
	for(i = 0; i < atual; i++){
		printf("\nU[%d] = %d\n", i, U[i]);
	}
	return 0;
}