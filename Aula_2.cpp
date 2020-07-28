#include <stdio.h>  // tratamento de entrada /saida 
#include <locale.h> 
/*
O que � uma vari�vel?

Vari�vel � um local reservado na mem�ria para armazenar um tipo de dado.

Toda vari�vel deve ter um identificador, ou seja um nome.

Al�m de ter um nome, a vari�vel tamb�m precisa ter um tipo.


O tipo de dado de uma vari�vel determina o que ela � capaz de armazenar.
<-------------------------------- ------------------------------------------>

Tipos de dados mais comuns em linguagem C

int: armazena valores num�ricos inteiros.

char: armazena caracteres.

float: armazena n�meros com ponto flutuante (reais) com precis�o simples.

double: armazena n�meros com ponto flutuante, com precis�o dupla, 
ou seja normalmente possui o dobro da capacidade de uma vari�vel do tipo float.

*/

main(){
	
	int v1,v2,soma;
	
	setlocale(LC_ALL,"Portuguese");//
	
	printf("digite o valor 1 : ");
	scanf("%i",&v1);
	
	/*scanf � uma fam�lia de fun��es da linguagem de programa��o C disponibilizada 
		pelo arquivo cabe�alho stdio. h que permite a leitura de dados 
		a partir de uma fonte de caracteres de acordo com um formato pr� determinado.
	*/
	
	printf("digite o valor 2 : ");
	scanf("%i",&v2);
	
	soma = v1+v2;
	
	printf("o resultado da soma entre %i + %i = %i",v1,v2,soma);
	
	
}
