#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Construa um programa que receba a idade de uma pessoa e identifique sua classe
eleitoral: n�o eleitor (menor que 16 anos de idade), eleitor obrigat�rio (entre 18 e
65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos)*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	printf("Informe sua idade: \n");
	scanf("%d", &idade);
	
	if (idade < 16){
    	printf("N�o Eleitor");
  	}
  	else{
    	if((idade > 18) && (idade < 65)){
      		printf("Eleitor obrigat�rio");
    }
    else{
      printf("Eleitor facultativo");
    }
  }
	return 0;
}
