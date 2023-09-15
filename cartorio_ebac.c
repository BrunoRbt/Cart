#include <stdio.h> //biblitoteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em mémoria
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro() // função responsavel pelo registro do usuário
{
	   // inicio criação de variáveis/string
       char arquivo[40];	
       char cpf[40];
       char nome[40];
       char sobrenome[40];
       char cargo[40];
       // final criação de variáveis/string
       
       printf("digite seu CPF a ser cadastrado:"); // coletando informação do usuário
       scanf("%s", cpf); //%s refere-se a string
       
       strcpy(arquivo, cpf); // responsável por copiar os valores das string
       
       FILE *file; // cria o arquivo
	   file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
	   fprintf(file,cpf); // salvo o valor da variável
	   fclose(file); // fecha o arquivo
	   
	   file = fopen(arquivo, "a");
	   fprintf(file, ",");
	   fclose(file);
	   
	   printf("digite o nome a ser cadastrado: ");
	   scanf("%s", nome);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file,nome);
	   fclose(file);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file, ",");
	   fclose(file);
	   
	   printf("digite o sobrenome a ser cadastrado: ");
	   scanf("%s", sobrenome);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file,sobrenome);
	   fclose(file);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file, ",");
	   fclose(file);
	   
	   printf("digite o cargo a ser cadastrado:");
	   scanf("%s", cargo);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file,cargo);
	   fclose(file);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file, ",");
	   fclose(file);
	   
	   system("pause");
}      
	   
         
int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado do sistema: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL) 
	{
		printf("esse arquivo não existe!.\n");
		system("pause");
	}
	
}



int consulta()
{
	
	setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
	
    char cpf[40];
    char conteudo[200];
  
    printf("digite o cpf do usuário: ");
    scanf("%s",cpf);
    FILE *file;
    file = fopen(cpf,"r");
  
    if(file == NULL)
  {
  	printf("arquivo não encontrado!.\n");
  }
  
    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\n Essas são as informações do usuário: ");
    	printf("%s", conteudo);
    	printf("\n\n");
    	
    	
	}
  
      system("pause");
}



int main()
{
    	int opcao=0; // Definindo variáveis
    	int laco=1;
    	
    	for(laco=1;laco=1;)
    	{
    		system("cls");
    		
    		 setlocale(LC_ALL, "Portuguese");
    		 
    		 printf("### Cartório da EBAC###\n\n"); // inicio do menu
    		 printf("escolha a opção desejada do menu\n\n");
    		 printf("\t1 - Resgistrar nome de usuário\n");
    		 printf("\t2 - Consultar nome de usuário\n");
    		 printf("\t3 - Deletar usuário do sistema\n\n");
    		 printf("\t4 - sair do sistema\n\n");
    		 printf("opção: "); // fim do menu
    		 
    		 
    		 scanf("%d", &opcao); // Armazenamento de escolha do usuário
    		 
    		 
    		 system("cls"); // reponsavel por limpar a tela
    		 
    		 switch(opcao) // inicio da seleção do menu
    		 {
    		 	
    		 	case 1:
    		 		
                registro(); // chamada de funções
    		 	break;
    		 		
    		    case 2:
    		    	
                consulta();
    		    break;
    		    	
    		    case 3:
    		    	
                deletar();
				break;	
				
				case 4:
				printf("Obrigado por sair do sistema!\n");
				return 0;
				break;	
				
					
				default:	
				printf("essa opção não está disponivel!\n");
				system("pause");
				break;		
    		 	// fim da seleção
			 }
		}
	}
