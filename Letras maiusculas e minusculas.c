#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void inverte_frase(char *pf, char *pi);
char letra_maiuscula(char letra);
char letra_minuscula(char letra);

int main()
{
	char frase[80], inv[80];
	                                           //Alunos
	printf("Digite a frase: ");                //slunoA - 1 troca
	gets(frase);                               //sounlA - 2 troca
	fflush(stdin);                             //sonulA - 3 troca
	inverte_frase(frase,inv);                  //sonulA - XXX
	printf("\nA frase invertida: %s", inv);   
	                                           //para palavras impares - Aluno - 5 letras/2 = 2 trocas
	getch();
	return 0;
}

char letra_maiuscula(char letra)
{
	if(letra>='a' && letra<='z')
	{
		return (letra-=32); //letra=letra-32
	}
	return letra;
}

char letra_minuscula(char letra)
{
	if(letra>='A' && letra<='Z')
	{
		return (letra+=32);
	}
	return letra;
}

void inverte_frase(char *pf, char *pi)
{
	int i, tam;          //012345
	tam=strlen(pf);      //Alunos
	pf+=tam-1;
	
	for(i=0;i<tam;i++,pf--, pi++)
	{
		*pi=letra_minuscula(*pf);  //padrao
		if(i==0)
		{
			*pi=letra_maiuscula(*pf);//letra maiuscula
		}
		if(*pf==' ')
		{
			i++;
			pi++;
			pf--;*pi=letra_maiuscula(*pf);
		}
	}
	*pi='\0';
}
