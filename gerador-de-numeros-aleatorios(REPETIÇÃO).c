#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <locale.h>

#define LIMIT 100 //Número máximo

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ext1, qtd, aux, status, i, j, k, l, m;
	
	
	printf("Digite a quantidade de números aleatórios você deseja: ");
	scanf("%d", &qtd);
	printf("\n");
	
	int V[qtd + 1];
	
	srand(time(NULL));
	
	for(i=0; i<qtd; i++){
			V[i] = 1 + (rand() % LIMIT);
	}
	
	for(j=1; j<qtd; j++){
		aux = V[j];
		for(k=j; (k>0) && (aux < V[k-1]); k--){
			V[k] = V[k-1];
		}
		V[k] = aux;
	}
	
	for(l=0; l<qtd; l++){
		printf("%d ", V[l]);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
