#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>


int tamanho_vetor = 1,total = 0;
int *v = (int*) malloc(tamanho_vetor * sizeof(int));
int conversao(int binario,int pos);
int binarioPensante(int impar,int resto,int tamanho_vetor,int pos,int pluspos,int ultimo_tamanho);

main(){
	setlocale(LC_ALL,"");
	int impar,resto,pos = 0,pluspos=0,ultimo_tamanho = 0;
		
		printf("\n Ola !!! vamos descobri que número você estar pensando nesse momento ?");
		printf("\n\nInforme para o programa se o número que você está pensando no momento e ímpar? \nLembrando ímpar [vale 1] e par [vale 0] nessa pergunta:");
		scanf("%d",&impar);
		printf("*******************************************************************************\n");
			if(impar == 1){
				printf("\nO número pensado e um ímpar? Beleza subtraia esse número por 1\ne após isso dívida ele por 2.");
				v[pos] = 1;
				total+= pow(2,pos);						
			}else if (impar == 0){
				printf("\nO número pensado e um par? Ótimo! Então divida ele por 2.");
				v[pos] = 0;				
			}
			//printf("\nv[%d] = %d",pos,v[pos]);
		printf("\n\nO seu número agora está valendo 1? \nLembrando se número tiver valendo esse valor confirme com Sim = [1],\nMas caso ainda não tenha dividido o bastante então responda [0]\npara negar essa questão\n\n R:");
		scanf("%d",&resto);							
			if ((resto == 1) && (total == 1)){
				printf("\nO número pensado e simplesmente o 3");
			}else if((resto == 1) && (total == 0)){
				printf("\nO número pensado e simplesmente o 2");
			}else if(resto == 0){				
				binarioPensante(impar,resto,tamanho_vetor,pos += 1,pluspos += 1,ultimo_tamanho);
				printf("\nO número pensado e completamente o número %d ",total);					
			}								
				
}

int binarioPensante(int impar,int resto,int tamanho_vetor,int pos,int pluspos,int ultimo_tamanho){
	ultimo_tamanho = tamanho_vetor;
	tamanho_vetor += pluspos; 
	v = (int*) realloc(v,tamanho_vetor * sizeof(int));
		
		printf("\n\nInforme para o software denovo se o numero que você está pensando no momento é ímpar? \nLembrando ímpar //vale 1// e par //vale 0// nessa pergunta:");
		scanf("%d",&impar);
		printf("*******************************************************************************\n");
			if(impar == 1){
				printf("\nO número pensado e um ímpar? Beleza! subtraia esse número por 1\n e após isso dívida ele por 2!");
				v[pos] = 1;
			}else if (impar == 0){
				v[pos] = 0;
				printf("\nO número pensado e um par? Beleza! então dívida ele por 2!");
			}
		//printf("\nv[%d] = %d",pos,v[pos]);
		printf("\n\nO seu número agora está valendo 1? \n lembrando se número tiver valendo esse valor confirme com Sim = [1].\nMas caso ainda não tenha dividido o bastante então responda [0]\n para negar essa questão\n\n R:");
		scanf("%d",&resto); 
			if(resto == 1){
				ultimo_tamanho = tamanho_vetor;pluspos+=1;tamanho_vetor += pluspos; 
				v = (int*) realloc(v,tamanho_vetor * sizeof(int));
				v[pos+1] = 1;			
				return conversao(v[pos+1]=1,pos+=1);
			}else if(resto == 0){					
				return binarioPensante(impar,resto,tamanho_vetor,pos+=1,pluspos+=1,ultimo_tamanho);
			}
}

int conversao(int binario,int pos){
	int i = 1;		
	if(pos < i){
		return 0;
	}else {		
		/*printf("%d[%d]\n",v[pos],*/total += v[pos]* (pow(2,pos));
		pos--;		
		return conversao(v[pos],pos);
	}	
		
}    
