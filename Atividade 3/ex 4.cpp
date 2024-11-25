//inclus�o de bibliotecas
#include <stdio.h>

//declara a fun��o 'calcularResultado'
int calcularResultado(int v[], int n); //a fun��o recebe um vetor do tipo int e um n�mero int

//sessao main
int main(){
	int vetor[5], i, resultado; //declara variaveis do tipo int, inclusive um vetor de 5 posi��es
	
	//la�o de repeti��o for
	for(i=0; i<5; i++){ //inicia o contador em zero e repete enquanto ele seja menor que 5, aumentando de 1 em 1
		vetor[i] = i*2; //insere nas posi��es do vetor a posi��o vezes 2 (o dobro de 0 a 4)
	}
	
	//atribui na vari�vel 'resultado' o valor retornado pela fun��o 'calcularResultado'
	resultado = calcularResultado(vetor, 5); //passa para a fun��o o vetor e o n�mero 5
	
	//imprime o resultado
	printf("Resultado = %d \n", resultado);
	
	return 0;
}

//conte�do da fun��o 'calcularResultado'
int calcularResultado(int v[], int n){ //recebe o vetor e o numero inteiro
	int i, soma=0; //declara variaveis do tipo int
	
	//la�o de repeti��o for
	for(i=0; i<n; i++){ //inicia o contador em zero e repete enquanto ele seja menor que o valor de n, aumentando de 1 em 1
		soma += v[i]; //a vari�vel 'soma' ser� somada com todos os valores do vetor 
	}
	
	return soma; //retorna o valor final de soma
}
