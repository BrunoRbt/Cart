#include <stdio.h> //biblitoteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em m�moria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() // fun��o responsavel pelo registro do usu�rio
{
	   // inicio cria��o de vari�veis/string
       char arquivo[40];	
       char cpf[40];
       char nome[40];
       char sobrenome[40];
       char cargo[40];
       // final cria��o de vari�veis/string
       
       printf("digite seu CPF a ser cadastrado:"); // coletando informa��o do usu�rio
       scanf("%s", cpf); //%s refere-se a string
       
       strcpy(arquivo, cpf); // respons�vel por copiar os valores das string
       
       FILE *file; // cria o arquivo
	   file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
	   fprintf(file,cpf); // salvo o valor da vari�vel
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
		printf("esse arquivo n�o existe!.\n");
		system("pause");
	}
	
}



int consulta()
{
	
	setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
	
    char cpf[40];
    char conteudo[200];
  
    printf("digite o cpf do usu�rio: ");
    scanf("%s",cpf);
    FILE *file;
    file = fopen(cpf,"r");
  
    if(file == NULL)
  {
  	printf("arquivo n�o encontrado!.\n");
  }
  
    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\n Essas s�o as informa��es do usu�rio: ");
    	printf("%s", conteudo);
    	printf("\n\n");
    	
    	
	}
  
      system("pause");
}



int main()
{
    	int opcao=0; // Definindo vari�veis
    	int laco=1;
    	
    	for(laco=1;laco=1;)
    	{
    		system("cls");
    		
    		 setlocale(LC_ALL, "Portuguese");
    		 
    		 printf("### Cart�rio da EBAC###\n\n"); // inicio do menu
    		 printf("escolha a op��o desejada do menu\n\n");
    		 printf("\t1 - Resgistrar nome de usu�rio\n");
    		 printf("\t2 - Consultar nome de usu�rio\n");
    		 printf("\t3 - Deletar usu�rio do sistema\n\n");
    		 printf("\t4 - sair do sistema\n\n");
    		 printf("op��o: "); // fim do menu
    		 
    		 
    		 scanf("%d", &opcao); // Armazenamento de escolha do usu�rio
    		 
    		 
    		 system("cls"); // reponsavel por limpar a tela
    		 
    		 switch(opcao) // inicio da sele��o do menu
    		 {
    		 	
    		 	case 1:
    		 		
                registro(); // chamada de fun��es
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
				printf("essa op��o n�o est� disponivel!\n");
				system("pause");
				break;		
    		 	// fim da sele��o
			 }
		}
	}
