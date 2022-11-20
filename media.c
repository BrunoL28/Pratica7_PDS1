#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTS 100

double mediaVetor(int vetor[], int n){
	int soma = 0;
	for(int i = 0; i < n; i++){
		soma += vetor[i];
	}
	return (double) soma / (double) n;
}

void preencheVetor(int *vetor, int n){
	for(int i = 0; i < n; i++){
		vetor[i] = rand();
	}
}

int main(){
	int v[MAX_ELEMENTS];
	double media;
	int n;
	do{
		printf("\nDigite o tamanho do vetor: \n");
		scanf("%d", &n);
		if(n < 0 || n > MAX_ELEMENTS)
			printf("\nTamanho invalido.\n");
	}while(n < 0 || n > MAX_ELEMENTS);
	preencheVetor(v, n);
	media = mediaVetor(v, n);
	printf("\nA media eh: %lf\n", media);
	return 0;
}
	
	
	
	