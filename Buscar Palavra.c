#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main() 
{
	int tamanho1,tamanho2,i,j,contador_letra,contador_palavra;
	char texto[200],pesquisa[47];
	
printf("\n  -------------------------------------------------------");
printf("\n  |    Atividade Supervisionada de Prog. Estruturada    |");
printf("\n  -------------------------------------------------------");
printf("\n  | Nome | Everton Alexandrino de Lima                  |");
printf("\n  |-----------------------------------------------------|");



printf("\n\n\n  Digite seu texto -> ");

gets (texto);

tamanho1=strlen(texto); //strlen conta o numero de caracteres da frase/ texto.

printf ("\n\nDigite a palavra que deseja buscar ->  ");
gets(pesquisa);

tamanho2=strlen(pesquisa);

for (i=0;i<tamanho1;i++) //compara desde o primeiro até o ultimo caractere.
{ 


if (texto[i]==pesquisa[0]){


   for (j=0;j<tamanho2;j++)
   {
   	if (texto[i+j]==pesquisa[j])
	   {
	   
	   contador_letra++;
		}
	      if (contador_letra==tamanho2)
		 	{
		 	 	      
	      		contador_palavra++;
	      		      	
	      	}
		}
	   contador_letra=0;
	}
   	
   	
   }
  printf ("\n\nExiste %i palavras que voce pesquisou na frase.\n\n",contador_palavra);

system("pause");
return 0;
   
}


