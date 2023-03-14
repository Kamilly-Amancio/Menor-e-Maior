
//MAIOR E MENOR NUMERO ENTRE DOIS NUMEROS INSERIDOS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){


	setlocale(LC_ALL,"Portuguese"); 
	
	int num1,num2;
	
	printf("\t*****Maior e Menor Número***");
	printf("\nDigite o número: ");
	scanf("%i", &num1);
	printf("\nDigite o número: ");
	scanf("%i", &num2);
	
// verificação e comparação dos dois valores inseridos
	if(num1>num2){
		
		printf("\nO número %i é maior entre %i e %i, e o número %i é o menor", num1, num1,num2,num2);
	}
	else {
		printf("\nO número %i é maior entre %i e %i, e o número %i é o menor", num2, num2,num1,num1);
	}
	getch();
	
	return 0;
	
}
