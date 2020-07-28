#include <stdio.h>  // tratamento de entrada /saida 
#include <locale.h> 
/*
O que é uma variável?

Variável é um local reservado na memória para armazenar um tipo de dado.

Toda variável deve ter um identificador, ou seja um nome.

Além de ter um nome, a variável também precisa ter um tipo.


O tipo de dado de uma variável determina o que ela é capaz de armazenar.
<-------------------------------- ------------------------------------------>

Tipos de dados mais comuns em linguagem C

int: armazena valores numéricos inteiros.

char: armazena caracteres.

float: armazena números com ponto flutuante (reais) com precisão simples.

double: armazena números com ponto flutuante, com precisão dupla, 
ou seja normalmente possui o dobro da capacidade de uma variável do tipo float.

*/

main(){
	
	int v1,v2,soma;
	
	setlocale(LC_ALL,"Portuguese");//
	
	printf("digite o valor 1 : ");
	scanf("%i",&v1);
	
	/*scanf é uma família de funções da linguagem de programação C disponibilizada 
		pelo arquivo cabeçalho stdio. h que permite a leitura de dados 
		a partir de uma fonte de caracteres de acordo com um formato pré determinado.
	*/
	
	printf("digite o valor 2 : ");
	scanf("%i",&v2);
	
	soma = v1+v2;
	
	printf("o resultado da soma entre %i + %i = %i",v1,v2,soma);
	
	
}
