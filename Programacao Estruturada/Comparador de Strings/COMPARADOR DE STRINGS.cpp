#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
	char x[100];
	char y[100];
	
	int compara;
	int compara_char;
	/* Set the locale to the environment default */
    setlocale (LC_ALL, "");

printf(" DIGITE 2 PALAVRAS ");
printf("\n Digite a primeira palavra: \n");
scanf(" %[^\n]", x);
printf("Digite a segunda palavra: \n");
scanf(" %[^\n]", y);
 
compara=strcmp(x,y);
	if (compara==0) 
	printf("\n As palavras são iguais \n");
	else
	printf("\n As palavras são diferentes \n");
	
compara_char=strncmp(x,y,5);
	if (compara_char==0)
	printf("\n Os 5 primeiros caracteres destas palavras são iguais entre si. \n");
	else
	printf("\n Pelo menos 1 dos 5 primeiros caracteres é diferente entre estas palavras. \n");	

printf("\n Concatenando fica %s",strcat(x,y));

}
