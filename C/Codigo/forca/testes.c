#include <stdio.h>


void potencia(int* resultado, int a, int b){


	for(int i = 0; i < b; i++) {
    (*resultado) = (*resultado) * a;
  }

	printf ("%d \n", valorpotencia);
}

void soma(int* resultado, int a, int b){
	(*resultado) = a ^ b;

}

int main()
{

	potencia(2, 3);
}