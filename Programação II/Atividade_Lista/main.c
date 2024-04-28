#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    Agenda *agenda = criar_agenda();
    int opcao;
    char *nome = (char*) malloc(500);
    do{
        printf("\n1 - Inserir Contato\n2 - Listar Contatos\n3 - Buscar Contato\n4 - Editar Contato\n");
        printf("5 - Remover Contato\n6 - Remover Duplicados\n7 - Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            insere_contato(agenda);
            break;
        case 2:
            lista_contatos(agenda);
            break;
        case 3:
            printf("\nDigite o nome:\n");
            fgets(nome, sizeof(char)*40, stdin);
            busca_contato(agenda,2,nome);
            break;
        case 4:
            printf("\nDigite o nome:\n");
            fgets(nome, sizeof(char)*40, stdin);
            atualiza_contato(agenda,nome);
            break;
        case 5:
            printf("\nDigite o nome:\n");
            fgets(nome, sizeof(char)*40, stdin);
            remove_contato(agenda,nome);
            break;
        case 6:
            printf("\nDigite o nome:\n");
            fgets(nome, sizeof(char)*40, stdin);
            remove_duplicados(agenda,nome);
            break;
        default:
            if(opcao != 7)
                printf("\nOpcao invalida!!!\n");
        }
    }while(opcao != 0);
    printf("Encerrando o programa...");

    return 0;
}
