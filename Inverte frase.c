#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void inverte_frase(char *pf, char *pi);

int main()
{
	char frase[80], inv[80];
	
	printf("\nInverte a frase: ");
	gets(frase);
	fflush(stdin);
	inverte_frase(frase,inv);
	printf("\nA frase invertida %s: ", inv);
	
	getch();
	return 0;
}

void inverte_frase(char *pf, char *pi)
{
	int i, tam;
	tam=strlen(pf);
	pf+=tam-1;
	for(i=0;i<tam;i++,pf--,pi++)
	{
		*pi=*pf;
	}
	*pi='\0';
}
