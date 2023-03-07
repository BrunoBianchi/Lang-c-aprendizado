#include <stdio.h>

#include <string.h>

// Definindo uma Constante para o Tamanho maximo dos meus vetores!

#define TAM 50

// Definindo um vetor bidimensional com maximo de 20 char e 50 nomes

char nomes[20][TAM] = {"Joao","Bruno"};

// Vetor Unidimensional para notas

int notas[TAM] = {5.0,10.0};

// Definindo um Inteiro Para ser Igual as quantidades de items do vetor

int realVectorValue = 2;

// Listando os alunos

void printAlunos() {
    for(int i = 0; i< realVectorValue;i++) {
        printf("%d.Aluno(a) %s \nNota:%d\n",i+1,nomes[i],notas[i]);
    }
}

// Adicioando um aluno
void adicionarAluno() {
        if(realVectorValue >=50) printf("Lista de Alunos Esta Cheia!");
        else {
            printf("Nome do %d Aluno:\n",realVectorValue + 1 );
            scanf("%s",nomes[realVectorValue]);
            printf("Nota do %d Aluno:\n",realVectorValue + 1);
            scanf("%d",&notas[realVectorValue]);
            // Aumentando o Tamanho do inteiro 
            realVectorValue++; 
            printf("Aluno Adicionado!");
        }

}

void removerAluno() {
    // Verificando se a lista esta vazia!
    if(realVectorValue <= 0) printf("Lista Esta Vazia! \n");
    else {
        printf("Qual Aluno Deseja Remover? \n");
        // Listando o index de cada Aluno
        for(int i = 0; i<realVectorValue;i++) {
            printf("%d. %s \n",i, nomes[i]);        
        } 
        // Definindo a opcao para remover
        int opcao= 0;
        scanf("%d",&opcao);
        // Caso a opcao seja maior que o tamanho do vetor ou opcao menor que 0 chame a funcao novamente
        if(opcao> realVectorValue || opcao < 0) {
            removerAluno();
        }else {
            // Modificando todos os valores do vetor a partir da posicao do aluno que deseja remover
            // Posicao anterior sera igual a proxima posicao
            for(int i = opcao;i<realVectorValue;i++) {
                // Copiando o nome da posicao i+1 para a poiscao i
                strcpy(nomes[i],nomes[i+1]);
                // Mudando a posicao das notas
                notas[i] = notas[i+1];
            }
            printf("Aluno Removido!");
            // Diminuir o tamanho do inteiro
            realVectorValue--;
        }

    }

}

int main () {
    int opcao;
    // Enquanto Opcao for diferente de 0
    while(opcao != 0)  {
    printf("\nMenu:\n1.Listar os Alunos e suas Notas\n2.Adicionar um Aluno\n3.Remover um Aluno\n0.Sair\n");
    scanf("%d",&opcao);
    switch(opcao) {
        case 1:
            printAlunos();
        break;  
        case 2:
            adicionarAluno();
        break;
        case 3:
            removerAluno();
        break;
        case 0 :
        // Caso opcao seja 0 saira do while e do programa!
            return 0;
        break;
        default: printf("Menu:\n1.Listar os Alunos e suas Notas\n2.Adicionar um Aluno\n3.Remover um Aluno\n0.Sair\n");
        }
    }
    return 0;
}