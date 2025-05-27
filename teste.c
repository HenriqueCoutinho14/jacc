#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída. Essencial para operações de I/O (Input/Output) como 'printf' (impressão formatada) e 'scanf' (leitura de entrada formatada).
#include <string.h> // Inclui a biblioteca de manipulação de strings. Necessária para operações com cadeias de caracteres, como o nome do aluno.

int main() { // A função 'main' é o ponto de entrada de qualquer programa C. A execução do programa inicia a partir desta função.

    // --- Declaração de Variáveis ---
    // Definição dos tipos de dados e nomes das variáveis que armazenarão as informações durante a execução do programa.

    char nomeAluno[50]; // Declara um array de caracteres ('char') para armazenar o nome do aluno.
                        // O tamanho '[50]' aloca espaço para até 49 caracteres e o terminador nulo ('\0'), crucial para strings em C.

    float nota1, nota2, nota3; // Declara três variáveis do tipo 'float' (ponto flutuante de precisão simples) para as notas.
                               // 'float' é adequado para valores numéricos que podem conter casas decimais.

    float media; // Declara uma variável 'float' para armazenar o resultado do cálculo da média.

    const float MEDIA_APROVACAO = 6.0; // Declara uma constante do tipo 'float' para definir o critério de aprovação.
                                       // O qualificador 'const' garante que o valor não poderá ser modificado durante a execução do programa,
                                       // promovendo clareza e manutenibilidade do código.

    // --- Coleta de Dados do Usuário ---
    // Interação com o usuário para obter as informações necessárias.

    printf("--- Verificador de Aprovação de Semestre ---\n"); // Exibe um cabeçalho informativo no console. '\n' insere uma quebra de linha.
    printf("Por favor, digite o nome do aluno: "); // Solicita o nome do aluno.
    // 'fgets' é utilizado para ler uma linha completa de texto (incluindo espaços) de forma segura,
    // armazenando-a no buffer 'nomeAluno' com o tamanho máximo especificado por 'sizeof(nomeAluno)' a partir da entrada padrão 'stdin'.
    fgets(nomeAluno, sizeof(nomeAluno), stdin);
    nomeAluno[strcspn(nomeAluno, "\n")] = 0; // Remove o caractere de nova linha ('\n') frequentemente capturado por 'fgets',
                                            // substituindo-o pelo terminador nulo ('\0') para garantir o correto encerramento da string.

    printf("Digite a primeira nota: "); // Solicita a primeira nota.
    scanf("%f", &nota1); // Lê um valor de ponto flutuante ('%f') da entrada padrão e o armazena no endereço de memória da variável 'nota1' (indicado por '&').

    printf("Digite a segunda nota: "); // Solicita a segunda nota.
    scanf("%f", &nota2); // Lê a segunda nota.

    printf("Digite a terceira nota: "); // Solicita a terceira nota.
    scanf("%f", &nota3); // Lê a terceira nota.

    // Limpa o buffer de entrada. Esta operação é necessária após o uso de 'scanf' para consumir quaisquer caracteres residuais (como o '\n' que não é lido pelo '%f'),
    // prevenindo comportamentos indesejados em leituras subsequentes, especialmente com 'fgets'.
    while (getchar() != '\n' && getchar() != EOF);


    // --- Processamento dos Dados ---
    // Realiza o cálculo da média aritmética das notas.

    media = (nota1 + nota2 + nota3) / 3.0; // Calcula a média. O uso de '3.0' (com ponto decimal) garante que a divisão seja de ponto flutuante,
                                          // preservando a precisão e evitando truncamento que ocorreria em uma divisão inteira.

    // --- Loogica Condicional e Saída ---
    // Avalia a condição de aprovação e exibe o resultado correspondente.

    printf("\n--- Resultado para %s ---\n", nomeAluno); // Exibe o nome do aluno no cabeçalho do resultado.

    printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3); // Imprime as notas, formatadas para exibir uma casa decimal (%.1f).
    printf("Média calculada: %.1f\n", media); // Imprime a mdia calculada, também formatada com uma casa decimal.

    if (media >= MEDIA_APROVACAO) { // Início da estrutura condicional 'if'.
                                   // Se a 'media' for maior ou igual à 'MEDIA_APROVACAO', o bloco de código dentro do 'if' é executado.
        printf("Situação: APROVADO! O aluno(a) %s PASSOU.\n", nomeAluno); // Mensagem de aprovação.
    } else { // O bloco 'else' é executado caso a condição do 'if' seja falsa (ou seja, a média é inferior à de aprovação).
        printf("Situação: REPROVADO. O aluno(a) %s errrrrroooou.\n", nomeAluno); // Mensagem de reprovação, caso o Atila retire mais pontos pela nossa roupa.
    } // Fim da estrutura 'if-else'.

    return 0; // Retorna 0 para o sistema operacional.... indicando que o programa foi executado com sucesso ihuuuuuuuuuu.
}
