# Conversor de numeros binarios em C

Algorítmo de conhecimento geral para converter números decimais em números binários:

f(x):
      enquanto x > 0
      resto = x % 2                    // Obtém o resto da divisão por 2
      armazenar resto                  // Armazena o resto em uma lista ou array
      x = x / 2                        // Atualiza x com o quociente da divisão
      inverter a lista de restos       // Para obter a ordem correta

