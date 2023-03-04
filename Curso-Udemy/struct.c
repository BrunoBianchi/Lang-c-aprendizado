#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Criando uma estrutura nomeado de aluno
typedef struct aluno {
    int numero;
    int classe;
    char nome[255];
} aluno;
// Criando uma funcao para dar display nas alunos.
// Parametros: 1. uma struct ponteiro para 'achar' na memoria a strutura criada
// 2. Int tamanho do tamanho da lista de struct
void PrintLista(aluno *vetor,int tamanho) {
    for(int i = 0; i< tamanho;i++) {
        printf("numero: %d \nclasse: %c \nnome: %s",vetor[i].numero,vetor[i].classe,vetor[i].nome);
    }
}


int main() {

    int tamanho = 0;
    printf("Quantas alunos deseja criar? \n");
    scanf("%d",&tamanho);
    getchar();
    // Criando uma struct de um ponteiro
     aluno *alunos;
    // Alocando memoria para 'numero' da estrutura alunos
    alunos->numero = (int) malloc(tamanho * sizeof(int));
    // Alocando memoria para 'classe' da estrutura alunos
    alunos->classe = (int) malloc(tamanho * sizeof(int)); 
    // Adicionando valores para struct
    for(int i = 0; i<tamanho;i++) {
        printf("Qual o numro do(a) %d aluno? ",i);
        scanf("%d",&alunos[i].numero);

        getchar(); //Limpar Buffer

        printf("Qual a classe da %d aluno? ",i);
        scanf("%c",&alunos[i].classe);

        getchar(); //Limpar Buffer

        printf("Nome do %d aluno? \n",i);
        char text[255];

        fgets(text,255,stdin);
        text[strlen(text) + 1] = '\0';
        strcpy(alunos[i].nome,text);
        };

     printf("Lista de alunos Criada: \n");
    //  Chamando funcao para listar as alunos da structure
     PrintLista(alunos,tamanho);

}