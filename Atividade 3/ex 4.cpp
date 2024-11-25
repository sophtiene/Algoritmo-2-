//inclusão de bibliotecas
#include <stdio.h>

//declara a função 'calcularResultado'
int calcularResultado(int v[], int n); //a função recebe um vetor do tipo int e um número int

//sessao main
int main(){
	int vetor[5], i, resultado; //declara variaveis do tipo int, inclusive um vetor de 5 posições
	
	//laço de repetição for
	for(i=0; i<5; i++){ //inicia o contador em zero e repete enquanto ele seja menor que 5, aumentando de 1 em 1
		vetor[i] = i*2; //insere nas posições do vetor a posição vezes 2 (o dobro de 0 a 4)
	}
	
	//atribui na variável 'resultado' o valor retornado pela função 'calcularResultado'
	resultado = calcularResultado(vetor, 5); //passa para a função o vetor e o número 5
	
	//imprime o resultado
	printf("Resultado = %d \n", resultado);
	
	return 0;
}

//conteúdo da função 'calcularResultado'
int calcularResultado(int v[], int n){ //recebe o vetor e o numero inteiro
	int i, soma=0; //declara variaveis do tipo int
	
	//laço de repetição for
	for(i=0; i<n; i++){ //inicia o contador em zero e repete enquanto ele seja menor que o valor de n, aumentando de 1 em 1
		soma += v[i]; //a variável 'soma' será somada com todos os valores do vetor 
	}
	
	return soma; //retorna o valor final de soma
}
