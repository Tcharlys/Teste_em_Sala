#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    char nome[50];
    float salario;
    int identificador;
    char cargo[20];
}Funcionario;

void preenche(int quant_funcionario, Funcionario *v_funcionario){
    int i;

    for ( i = 0; i < quant_funcionario; i++)
    {
        printf("Digite o nome do funcionario\n");
        scanf(" %[^\n]s", v_funcionario[i].nome);

        printf("Digite o salariodo funcionario\n");
        scanf(" %f", &v_funcionario[i].salario);

        printf("Digite o identificador do funcionario\n");
        scanf(" %d", &v_funcionario[i].identificador);

        printf("Digite o cargo do funcionario\n");
        scanf(" %[^\n]s", v_funcionario[i].cargo);

    }

};

int main(void){

    int quant_funcionario;

    printf("Digite a quantidade de funcionarios suas empresa possui\n");
    scanf(" %d", &quant_funcionario);

    Funcionario *v_funcionario = (Funcionario*) malloc(quant_funcionario * sizeof(Funcionario));

    preenche(quant_funcionario, &v_funcionario);

    free(v_funcionario);

    return 0;
}