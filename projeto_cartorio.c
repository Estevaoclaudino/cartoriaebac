#include <stdio.h> //Bliblioteca de comuninação com o usuário
#include <stdlib.h> //Biblioteca de alocação de espaço em memória
#include <locale.h> //Bibliotaca de alocações de texto por região

int main()
{
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
    	
    	system("cls");
    	
	    setlocale(LC_ALL, "Portuguese"); //Definindo líguagem
    	
	    printf("### Cartótio da EBAC ###\n\n"); //Início do menu
	    printf("Escolha a opção desejada do menu\n\n");
     	printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n");  
    	printf("Opçao:"); //Fim do menu
    	
    	scanf("%d", &opcao); //Armazenando a escolha do usuário
    	
    	system("cls");
    	
    	switch(opcao)
    	{
    		case 1:
    		printf("Você escolheu o registro de nomes!\n");
	    	system("pause");
	    	break;
	    	
	    	case 2:
	    	printf("Você escolheu consultar nomes!\n");
	    	system("pause");
	    	break;
	    	
	    	case 3:
	    	printf("Você escolheu deletar nomes!\n");
	    	system("pause");
	    	break;
	    	
	    	default:
	    	printf("Essa opção não está disponível! :(\n");
	    	system("pause");
	    	break;
    	}
		}
    	
	
}

