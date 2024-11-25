//crie uma matriz quadrada onde o usuário fornece o tamanho (n) e depois seja impressa da seguinte maneira:
// exemplo: se o usuário digitar 5:
//1 0 0 0 0
//1 2 0 0 0
//1 2 3 0 0
//1 2 3 4 0
//1 2 3 4 5

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, j;
	
	printf("Digite o tamanho da matriz quadrada: ");
	scanf("%d", &n);
	
	int matriz[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(j <= i){
				matriz[i][j] = j+1;
			}
			else{
				matriz[i][j] = 0;
			}
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
