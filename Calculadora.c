
#include <stdio.h>

int main(){

  int num1, num2, soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0;
  int opcao = 0, continuar = 0;;

  for (int i = 0; continuar != 3; i++){

  printf("Digite um numero 1: ");
  scanf("%d", &num1);

  printf("Digite um numero 2: ");
  scanf("%d", &num2);

  continuar = 0;

  for(int j = 0; continuar != 2; j++){

    printf("\nSelecione um operador (1 = Soma, 2 = Subtracao, 3 = Multiplicacao, 4 = Divisao): ");
    scanf("%d", &opcao);

    soma = num1+num2;
    subtracao = num1-num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    switch(opcao){

      case 1:
        printf("%d + %d = %d\n", num1, num2, soma);
        break;
      case 2:
        printf("%d - %d = %d\n", num1, num2, subtracao);
        break;
     case 3:
        printf("%d * %d = %d\n", num1, num2, multiplicacao);
        break;
      case 4:
        printf("%d / %d = %d\n", num1, num2, divisao);
        break;

  }

  printf("Qual o proximo passo? (1 = Mudar de operacao, 2 = Mudar os numeros, 3 = Encerrar o programa)");
  scanf("%d", &continuar);

  if (continuar == 3){
    printf("\nFim do codigo!\n");
    return 0;

  }

}

}

}