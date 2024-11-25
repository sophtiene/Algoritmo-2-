//inclusão de bibliotecas
#include <stdio.h>
#include <string.h>
#include <locale.h>

//define uma struct
typedef struct {
	char modelo[50]; //atributo 'modelo' do tipo char
	int ano; //atributo 'ano' do tipo int
	double preco; //atributo 'preco' do tipo double
} Carro; //nome da struct 

//declara a função modificarPreco
void modificarPreco(Carro *c, double novoPreco){ //recebe o ponteiro (*c) de um objeto struct do tipo Carro e um valor double (novoPreco)
	c->preco = novoPreco; //o objeto do tipo Carro que está sendo apontado pelo ponteiro 'c' recebe no atributo 'preco' o valor de novoPreco
}

//declara a função imprimirCarro
void imprimirCarro(Carro *c){ //recebe o ponteiro (*c) de um objeto do tipo struct Carro
	printf("Modelo: %s\n", c->modelo); //usa o ponteiro para imprimir o atributo modelo
	printf("Ano: %d\n", c->ano); //usa o ponteiro para imprimir o atributo ano
	printf("Preço: R$ %.2lf\n", c->preco); //usa o ponteiro para imprimir o atributo preco
}

//sessão main
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita a impressão de caracteres da língua portuguesa (´ ç ã etc...)
	Carro carro1; //define o objeto 'carro1' do tipo struct Carro 
	
	strcpy(carro1.modelo, "XyZ"); //atribui um valor para o modelo de carro1
	carro1.ano = 2020; //atribui um valor para o ano de carro1
	carro1.preco = 90000.00; //atribui um valor para o preco de carro1
	
	//imprime os dados de carro1
	printf("Dados antes da modificação:\n");
	imprimirCarro(&carro1); //passa o ponteiro de carro1
	
	//usa a funcao modificar preco
	modificarPreco(&carro1, 115000.00); //passa o ponteiro de carro1 e um novo valor
	
	//imprime os dados de carro1
	printf("\nDados após a modificação do preço:\n");
	imprimirCarro(&carro1); //passa o ponteiro de carro1
	
	return 0;
}
