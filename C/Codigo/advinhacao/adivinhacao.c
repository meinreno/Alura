#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	//Imprime o Cabeçalho do nosso jogo	
	printf("****************************************\n");
	printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
	printf("****************************************\n");
	
	int segundos = time(0);
	srand(segundos);
	
	int numerogrande =  rand();

	int numerosecreto = numerogrande % 100;
	
	
	int chute;

	int tentativas = 1;

	double pontos = 1000;

	int acertou = 0;

	int nivel;
	printf("Qual o nivel de Dificuldade?\n");
	printf("(1) Fácil (2) Médio (3) Dificil\n");
	printf("Escolha:\n");
	scanf("%d", &nivel);

	int numerotentativas;

	switch(nivel){
		case 1:
			numerotentativas = 20;
			break;
		case 2:
			numerotentativas = 15
			break;
		default:
			numerotentativas = 6;
			break;
	}	

	for(int i = 1; i<= numerotentativas; i++){
		printf ("Tentativa %d  \n", tentativas);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d \n", chute);

		
		if (chute < 0)
		{
			printf("Voce não pode chutar numeros negativos\n");
			

			continue;
		}
	
		
		int maior = chute > numerosecreto;
		int menor = chute < numerosecreto;


		if(acertou) {
			break;
		}
		else if(maior) {
				printf("Seu chute foi maior que o numero secreto \n");		
			}
		else {
				printf("Seu chute foi menor que o numero secreto \n");		
			}
			
		tentativas++;
		double pontosperdidos = abs(chute - numerosecreto) / (double)2;
		pontos = pontos - pontosperdidos;
	}
	printf("Fim de Jogo\n");
	if (acertou){
		printf("Voce Ganhou\n");
		printf("Você acertou em %d tentativas!\n", tentativas);	
		printf("Total de Pontos %.2f \n", pontos);	
	}else{
		printf("Voce Perdeu\n");
	}

	
}
