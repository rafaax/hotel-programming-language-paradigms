#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "headers/utils.h"
#include "headers/cliente.h"
#include "headers/quarto.h"

int main() {
	
	int menu, menu_quarto, menu_servicos, menu_clientes, menu_reservas  = 0;
	int quarto_editado, quarto_busca;
	
	
	struct Cliente cliente;
	struct Quarto quarto;
    
    while (menu != 5) {
    	system("cls");
        printf("\n Seja bem-vindo ao Cyberia Hotel! \n");
        printf("\n ==================================== \n");
        printf("1. Quartos \n");
        printf("2. Servicos \n");
        printf("3. Clientes \n");
        printf("4. Reservas \n");
        printf("5. Sair \n");
        printf("Escolha uma opcao para continuar: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
            	system("cls");
                while(menu_quarto != 6){
                	system("cls");
                	printf("\n Aqui voce fica a parte de tudo sobre os nossos quartos! \n");
			        printf("==================================== \n");
			        printf("1. Cadastrar novo quarto \n");
			        printf("2. Editar quarto existente \n");
			        printf("3. Listar todos quartos \n");
			        printf("4. Listar quartos disponiveis \n");
			        printf("5. Visualizar informacoes de um quarto especifico \n");
			        printf("6. Sair \n");
			        printf("Escolha uma opcao para continuar: ");
			        scanf("%d", &menu_quarto);
			        
			        switch(menu_quarto){
			        	case 1: 
			        		system("cls");
			        		
							printf("\n Adicionando um quarto \n");
							printf("============================ \n");
							
							quarto.id = gerarIdAleatorio();
							
							printf("Digite o numero do quarto: \n");
							scanf("%d", &quarto.numero);
							
							printf("Digite o valor da diaria: \n");
							scanf("%f", &quarto.preco_diaria);
							
							printf("Digite o ID dos servicos referente ao quarto: \n");
							scanf("%d", &quarto.servicos_id);
							
							printf("Ao cadastrar o novo quarto, ele estara disponivel por padrao! \n");
							
							quarto.disponivel = 1;
									
			        		adicionarQuarto(quarto);
			        		
			        		sleep(2);
			        		printf("Quarto cadastrado com sucesso!");
			        		system("pause");
			        		break;
			        	case 2:
			        		system("cls");
			        		printf("\n Atualizar um quarto \n");
			        		printf("============================ \n");
			        		printf("Digite o ID do quarto a ser editado \n");
			        		scanf("%d", &quarto_editado);
			        		
			        		printf("Digite o numero do quarto: \n");
							scanf("%d", &quarto.numero);
							
							printf("Digite o valor da diaria: \n");
							scanf("%f", &quarto.preco_diaria);
							
							printf("Digite o ID dos servicos referente ao quarto: \n");
							scanf("%d", &quarto.servicos_id);
							
			        		atualizarQuarto(quarto, quarto_editado);
			        		
			        		sleep(2);
			        		printf("Quarto atualizado com sucesso! \n");
			        		system("pause");
			        		break;
			        	case 3: 
			        		system("cls");
			        		listarQuartos();
			        		system("pause");
			        		break;
			        	case 4:
			        		system("cls");
			        		listarQuartosDisponiveis();
			        		system("pause");
			        		break;
			        	case 5:
			        		system("cls");
			        		printf("Digite o ID de um quarto para saber mais sobre ele! \n");
			        		scanf("%d", &quarto_busca);
			        		visualizarQuarto(quarto_busca);
			        		system("pause");
							break;
						case 6:
			        		system("cls");
			        		printf("Saindo... \n");
			        		system("pause");
							break; 
						default:
							system("cls");
                			printf("Opcao invalida! Tente novamente.\n");
                			system("pause");
					}
				}
                break;
            case 2:
            	system("cls");
                break;
            case 3:
            	system("cls");
            	break;
            case 4:
            	system("cls");
                break;
            case 5:
            	system("cls");
            	printf("Saindo... \n");
            	break;
            default:
            	system("cls");
                printf("Opcao invalida! Tente novamente.\n");
                system("pause");
        }
    }
    
	return 0;
}
