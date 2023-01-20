#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//Programa criado por Rafael Ramos, Taubat�, 20/01/2023.
	
	//Crie um algoritmo que leia 3 valores e informe se eles s�o
    //iguais entre si para formarem os lados de um tri�ngulo equil�tero.

//fun��o principal
void main(){
	
	//para usar acentos
	setlocale(LC_ALL,"");
	
	//definindo variaveis
	int ladoA, ladoB, ladoC;
	
	//coletando dados
	printf("\nDigite o valor do lado A do triangulo: ");
	scanf("%d", &ladoA);
	printf("\nDigite o valor do lado B do triangulo: ");
	scanf("%d", &ladoB);
	printf("\nDigite o valor do lado C do triangulo: ");
	scanf("%d", &ladoC);
	
	printf("\nOs lados do triangulo s�o A = %d, B = %d e C = %d\n", ladoA, ladoB, ladoC);
	
	//condicional para saber se os lados s�o iguais
	if((ladoA == ladoB) && (ladoA == ladoC)){
		printf("\nO triangulo � equilatero!\n");
	}else if((ladoA == ladoB) || (ladoA == ladoC) || (ladoB == ladoC)){
		printf("\nO triangulo � isoceles!\n");
	}else{
		printf("\nO triangulo � escaleno!\n");
	
	//Fim do programa	
	system("pause");
	}
	
}
