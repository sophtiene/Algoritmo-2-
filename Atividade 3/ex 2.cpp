//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>

//define uma struct 
typedef struct{
	double peso; //atributo 'peso' do tipo double
	int idade; //atributo 'idade' do tipo int
	double altura; //atributo 'altura' do tipo double
} pessoa; //nome da struct 

//declara a fun��o imprimePessoa
void imprimePessoa(pessoa p) { //recebe a vari�vel 'p' do tipo 'pessoa' (pessoa pe a struct definida)
	printf("Peso: %lf. Idade: %d. Altura: %lf. \n\n", p.peso, p.idade, p.altura); //imprime os atributos da vari�vel p
}

//sess�o main
int main(){
	
	//define um vetor de 5 posi��es e uma variavel, os dois do tipo pessoa (struct)
	pessoa pessoas[5], p1;
	
	pessoas[0].peso = 80.6; //atribui o peso da pessoa vetor 0
	pessoas[0].idade = 40; 	//atribui a idade da pessoa vetor 0
	pessoas[0].altura = 1.70; 	//atribui a altura da pessoa vetor 0
	
	p1 = pessoas[0]; //atribui todos os atributos de pessoas[0] para p1
	
	//verifica se a idade de p1 � maior que 20
	if(p1.idade > 20){
		p1.idade++; //se for maior, aumenta em 1 na idade de p1
	}
	
	//atribui todos os atributos de pessoas[0] para pessoas[1]
	pessoas[1] = pessoas[0];
	
	//usa a fun��o 'imprimePessoa' para imprimir todos os atributos de cada pessoa
	imprimePessoa(p1);
	imprimePessoa(pessoas[0]);
	imprimePessoa(pessoas[1]);
	imprimePessoa(pessoas[2]);
	imprimePessoa(pessoas[3]);
	imprimePessoa(pessoas[4]);
	
	return 0;
}
