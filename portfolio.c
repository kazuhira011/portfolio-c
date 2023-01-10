#include <stdio.h>
#include <stdlib.h>

int main(){

    int escolha;

    while(1){

    printf("J%cssica Oliveira Rodolfo da Silva. \n", 130);
    printf("24 anos. \n");
    printf("Cursando o 3%c semestre de An%clise e Desenvolvimento de Sistemas na faculdade Anhanguera. \n", 167, 160);
    printf("Digite 1 para cursos. \n");
    printf("Digite 2 para experi%cncias profissionais. \n", 136);
    printf("Digite 3 para projetos e informa%c%ces adicionais. \n", 135, 228);
    printf("Digite 4 para contato. \n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
        printf("Cursos: \n\n");
        printf("Tecnologia da Informa%c%co: \n", 135, 228);
        printf("Algoritmos e l%cgica de programa%c%co; \n", 162, 135, 198);
        printf("Tecnologia da informa%c%co e comunica%c%co; \n", 135, 198, 135, 198);
        printf("Programa%c%co em Python (b%csico); \n", 135, 198, 160);
        printf("Programa%c%co em C (b%csico ao avan%cado) - cursando; \n", 135, 198, 160, 135);
        printf("Desenvolvimento Web com Javascript e projetos (b%csico ao avan%cado) - cursando. \n \n", 160, 135);

        printf("Administra%c%co: \n", 135, 198);
        printf("Administra%c%co financeira; \n", 135, 198);
        printf("Comunica%c%co interpessoal e atendimento ao cliente; \n", 135, 198);
        printf("Pacote Office (excel, word e powerpoint); \n");
        printf("Gest%co de marketing; \n", 198);
        printf("Orat%cria; \n", 162);
        printf("Lideran%ca. \n \n", 135);

        printf("L%cnguas: \n\n", 161);
        printf("Portugu%cs - nativo; \n", 136);
        printf("Ingl%cs - intermedi%crio (leitura e escrita); \n", 136, 160);
        printf("Russo - b%csico. \n", 160);
        break;

        case 2:
        printf("Empresa: APC Net Inform%ctica. \n", 160);
        printf("Cargo: Atendente. \n");
        printf("Per%codo: 11/2021 - 07/2022. \n", 161);
        printf("Atividades: \n");
        printf("Atendimento no balc%co, por telefone e via WhatsApp com uso de gatilhos mentais; \n", 198);
        printf("Anota%c%ces, pesquisas e tarefas atrav%cs do CRM; \n", 135, 228, 130);
        printf("Venda de pe%cas e servi%cos; \n", 135, 135);
        printf("Aux%clio em or%camento de computadores; \n", 161, 135);
        printf("Cria%c%co de micro sites; \n", 135, 198);
        printf("Organiza%c%co e limpeza. \n \n", 135, 198);
        
        printf("Empresa: Rio Ita ltda. \n");
        printf("Cargo: Aprendiz Administrativo. \n");
        printf("Per%codo: 04/2017 - 04/2018. \n", 161);
        printf("Atividades: \n");
        printf("Atendimento no balc%co e por telefone; \n", 198);
        printf("Digita%c%co e distribui%c%co de contracheque e folha de ponto; \n", 135, 198, 135, 198);
        printf("Admiss%co; \n", 198);
        printf("Demiss%co; \n", 198);
        printf("Checklist; \n");
        printf("Organiza%c%co 5S; \n", 135, 198);
        printf("Organiza%c%co de arquivo. \n", 135, 198);
        break;

        case 3:
        printf("Projetos pessoais: \n");
        printf("Calculadora em C; \n");
        printf("Blog em C; \n");
        printf("Jogos simples em C; \n");
        printf("Portf%clio em C. \n", 162);
        printf("Github: https://github.com/kazuhira011 \n \n");

        printf("Informa%c%ces adicionais: \n", 135, 228);
        printf("Experi%cncia com montagem e manuten%c%co de computadores; \n", 136, 135, 198);
        printf("Boa digita%c%co. \n", 135, 198);
        break;

        case 4:
        printf("email: jessicaoliveirarsilva@gmail.com \n");
        printf("telefone: (21)96886-4298 \n");
        break;

        default:
        printf("Comando inv%clido! \n", 160);

    }
    system("pause");
    continue;
    }

    return 0;
}