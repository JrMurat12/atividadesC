#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void imprime(char *p);

int main()
{
	char frase[80], op;
	
	printf("\nInverte a frase");
	
	do
	{
		printf("\nDigite a frase: ");
		gets(frase);
		fflush(stdin);
		imprime(frase);
		printf("\nDeseja continuar <S/N>: ");
		scanf("%c", &op);
		fflush(stdin);
	}while(op!='n' && op!='N');
	
	getch();
	return 0;
}

void imprime(char *p)
{
	int i, tam;
	tam=strlen(p);
	p+=tam-1; //p=p+tam-1
	for (i=0;i<tam;i++,p--)
	{
		printf("%c", *p);
	}
	printf("\n");
}
