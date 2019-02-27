#include <stdio.h>
#include <stdlib.h>

int main(){
int tamanho_vetor = 10, posicao=0, maisposicoes,tamanho_anterior;
FILE *fptr;
fptr = fopen("numeros.dat","r+");
int *v = (int*) malloc( tamanho_vetor * sizeof(int));
if(fptr == NULL) {
printf("\n Erro ao abrir arquivo numeros.dat");
return 1;
}

		while ( fscanf(fptr, "%d\n", &v[posicao]) != EOF) {
		printf ("v[%d] = %d\n",posicao,v[posicao]);
		posicao += 1;
		}

			for (int i = posicao; i <tamanho_vetor;i++){
			printf("digite a posicao %d ",i);
			scanf("%d",&v[i]);
			fprintf(fptr, "%d\n", v[i]);
			}
		if (posicao > 10) tamanho_vetor = posicao;
	do{
		printf("deseja mais posicoes?");
		scanf("%d",&maisposicoes);
		tamanho_anterior = tamanho_vetor;
		tamanho_vetor += maisposicoes;
		
		if (maisposicoes !=0) {
		v = (int*) realloc(v, tamanho_vetor * sizeof(int));
		}
		
		
		for (int i = tamanho_anterior; i <tamanho_vetor;i++){
		printf("digite a posicao %d",i);
		scanf("%d",&v[i]);
		fprintf(fptr, "%d\n", v[i]);
		}
	
	}
	
	while(maisposicoes != 0);
	fclose(fptr);
	
	for (int i = 0;i<tamanho_vetor;i++){
	printf ("v[%d] = %d\n",i,v[i]);
	}
return 0;
}
