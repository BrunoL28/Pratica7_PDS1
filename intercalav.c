#include <stdio.h>

int main(){
	int X[10];
	int Y[10];
	int Z[20];
	int i;
	int contx = 0;
	int conty = 0;
	printf("\nDigite os elementos do vetor X: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &X[i]);
	}
	printf("\nDigite os elementos do vetor Y: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &Y[i]);
	}
	for(i = 0; i < 20; i++){
		if(i % 2 == 0){
			Z[i] = X[contx];
		contx++;
		}else{
			Z[i] = Y[conty];
			conty++;
		}
	}
		for(i = 0; i < 20; i++){
		printf("\nZ[%d] = %d\n", i, Z[i]);
		}
}