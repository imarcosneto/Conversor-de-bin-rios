#include <stdio.h>

int main() {
    int a, i = 0;
    int binario[50];  // Array para armazenar os restos (bits binários)

    printf("\nEntre com um número inteiro: ");
    scanf("%d", &a);

    // Coleta os restos e armazena no array
    while (a > 0) {
        binario[i] = a % 2;  // Armazena o resto
        a = a / 2;  // Atualiza o valor de 'a' para o quociente da divisão
        i++;
    }

    // Imprime os restos armazenados na ordem inversa (do mais significativo ao menos significativo)
    printf("\nO número em binário é: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    printf("\n");
    return 0;
}
