#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, result;
	printf("Digite dois números:");
	scanf("%d", &x);
	scanf("%d", &y);
	result = x*y;
	
	printf("O produto entre %d e %d é %d", x, y, result);
	return 0;
}
