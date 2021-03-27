#include <stdio.h>

// tipos de dados heterogêneos
struct Book {
  int id;            // 4 bytes
  char titulo[40];  // 1 * 40
  char autor[40];   // 1 * 40
  char assunto[30]; // 1 * 30
  char isbn[36];    // 1 * 36
  int numPaginas;   // 4
  float valor;      // 2 
};

typedef struct Book MyBook; // renomeando um tipo de dados para um nome mais interessante

#define MAX 100

// constantes booleanas
#define TRUE 1
#define FALSE 0

// FUNCAO
void imprimir(MyBook livro) { // PARAMETRO
  printf("ID: %d\n", livro.id);
  printf("Titulo: %s", livro.titulo);
  printf("Autor: %s", livro.autor);
  printf("Assunto: %s", livro.assunto);
  printf("ISBN: %s", livro.isbn);
  printf("Páginas: %d\n", livro.numPaginas);
  printf("Valor: R$ %5.2f\n", livro.valor);
}

int main(void) { //PRINCIPAL
//  int notas[10]; // tipo de dados homogeneo
  MyBook livros[MAX]; // declaracao do registro
  MyBook livro;
  int capacidade; // quantidade máxima
  int tamanho = 0; // quantos livros
  int op = 0;
  int id = 0;
  //printf("%lu\n", sizeof(livro));
  
  // CRUD - CREATE, RETRIEVE, UPDATE, DELETE

  while (op != 6) {

    printf("\n\nMENU [%d]\n", tamanho);
    printf("===============================\n");
    printf("1. criar livro\n");
    printf("2. Recuperar livros\n");
    printf("3. Recuperar livro por ID\n");
    printf("4. Atualizar livro\n");
    printf("5. Excluir livro\n");
    printf("6. Sair\n\n");

    printf("Selecione uma das opções acima:\n");
    scanf("%d", &op);

    switch(op) {
      case 1: // cadastro
        printf("Digite o identificador do livro:\n");
        scanf("%d", &livro.id);

        getchar(); // engolindo o \n digitado depois do ID do livro

        printf("Digite o título do livro:\n");
        fgets(livro.titulo, 40, stdin);
        //scanf("%[^\n]s", livro.titulo);

        printf("Digite o autor do livro:\n");
        fgets(livro.autor, 40, stdin);

        printf("Digite o assunto do livro:\n");
        fgets(livro.assunto, 30, stdin);

        printf("Digite o ISBN do livro:\n");
        fgets(livro.isbn, 36, stdin);

        printf("Digite o numero de páginas do livro:\n");
        scanf("%d", &livro.numPaginas);

        printf("Digite o valor do livro:\n");
        scanf("%f", &livro.valor);

        imprimir(livro);
        livros[tamanho] = livro;
        tamanho++;

      break;
      case 2: // listagem
        // iterar sobre a lista de livros
        printf("\nListando livros:\n\n");
        for (int i = 0; i < tamanho; i++) {
          printf("%d - ", i);
          imprimir(livros[i]);
        }
      break;
      case 3: // recuperar por ID
        if (tamanho == 0) {
          printf("INFO: O sistema não possui livros para pesquisa.");
        } else {
          // ler o identificador
          printf("Digite o identificador desejado:\n");
          scanf("%d", &id);
          // buscar ele na lista de livros
          // busca sequencial
          int i = 0;
          int achou = FALSE;
          for (i = 0; i < tamanho; i++) {
            // comparando o ID passado com os IDs dos livros
            if (livros[i].id == id) {
              printf("Livro encontrado!\n");
              imprimir(livros[i]);
              achou = TRUE;
              break;
            }
          }
          
          if (achou == FALSE) {
            printf("O livro não existe!\n");
          }
        }
      break;
      case 4: // Atualizar
      break;
      case 5: // Excluir
      // [X, X, X, X]
      // tamanho --;
      break;
      case 6: // sair do sistema
      break;
      default:
        printf("ALERTA: operação inválida");
    }
  }
  

 //getchar(); // engolindo o \n digitado depois do ID do livro

  return 0;
}