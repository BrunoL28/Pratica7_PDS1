#include <stdio.h>

#define MAXTAM 100

void main(){
	double u[MAXTAM];
	double v[MAXTAM];
	int i = 0;
	unsigned int N;
	double P = 0;
	do{
		printf("\nDigite a quantidade de vetores, de 1 a 100: \n");
		scanf("%d", &N);
		if(N > MAXTAM)
			printf("\nQuantidade excede o numero maximo de elementos do arranjo. Digite outro valor ate 100.\n");
	}while(N > MAXTAM);
	printf("\nDigite os valores de u: \n");
	for(i = 0; i < N; i++){
		scanf("%lf", &u[i]);
	}
	printf("\nDigite os valores de v: \n");
	for(i = 0; i < N; i++){
		scanf("%lf", &v[i]);
	}
	for(i = 0; i < N; i++){
		P = P + (u[i]*v[i]);
	}
	printf("\nO produto escalar entre os dois arranjos eh: %lf\n", P);
}