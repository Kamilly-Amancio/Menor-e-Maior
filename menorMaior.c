
//MAIOR E MENOR NUMERO ENTRE DOIS NUMEROS INSERIDOS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){


	setlocale(LC_ALL,"Portuguese"); 
	
	int num1,num2;
	
	printf("\t*****Maior e Menor N�mero***");
	printf("\nDigite o n�mero: ");
	scanf("%i", &num1);
	printf("\nDigite o n�mero: ");
	scanf("%i", &num2);
	
// verifica��o e compara��o dos dois valores inseridos
	if(num1>num2){
		
		printf("\nO n�mero %i � maior entre %i e %i, e o n�mero %i � o menor", num1, num1,num2,num2);
	}
	else {
		printf("\nO n�mero %i � maior entre %i e %i, e o n�mero %i � o menor", num2, num2,num1,num1);
	}
	getch();
	
	return 0;
	
}
