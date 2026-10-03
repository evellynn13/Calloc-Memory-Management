  #include <stdlib.h>
  #include <stdio.h>
   
  int main()   {

    int quantidade;

    printf("Digite a quantidade de numeros que deseja alocar: ");
    scanf("%d", &quantidade);

    int *numeros = calloc(quantidade, sizeof(int));

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

     printf("\nNumeros digitados:\n");
     for (int i = 0; i < quantidade; i++) {
        printf("%d\n", numeros[i]);
    
     }

      free(numeros);

      return 0;


  }

  