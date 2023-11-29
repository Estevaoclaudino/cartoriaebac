#include <stdio.h> //Bliblioteca de comuninação com o usuário
#include <stdlib.h> //Biblioteca de alocação de espaço em memória
#include <locale.h> //Bibliotaca de alocações de texto por região
#include <string.h> //Biblioteca responsavel por cuidar das strings

int registro() //Função respondável por cadastrar os usuários no sistema
{
	//início da criação de variavéis/String
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da criação de variavéis/String
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando Informação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //Responsável por copiar os valores das strings
	
	FILE *file; //Cria o arquivo no banco de dados
	file = fopen(arquivo, "w"); //Cria o arquivo e o "W" significa escrever.
	fprintf(file,cpf); //Salvo o valor da variável
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Incluir mais informações no arquivo
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s",nome); // Salvando na string
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
	
	
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a línguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não foi possível abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}
int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!.\n");
		system("pause");
	}


}


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
    	
    	system("cls"); //Responsável por limpar a tela
    	
    	switch(opcao) //Início da seleção do menu
    	{
    		case 1:
    		registro(); //Chamada de funções
	    	break;
	    	
	    	case 2:
	    	consulta();
	    	break;
	    	
	    	case 3:
	        deletar();
	    	break;
	    	
	    	default:
	    	printf("Essa opção não está disponível! :(\n");
	    	system("pause");
	    	break;
    	} //Fim da seleção
	}
    	
	
}

