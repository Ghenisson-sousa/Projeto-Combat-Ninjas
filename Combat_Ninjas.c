#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//O jogo terá funções para cada bloco de alresentacao em tela


//Função mostrando visão geral da vila
int menu_vila(){
	printf("\n******************** vila ****************\n\n");
	printf("(1) Missões\n");
	printf("(2) Sala de Treinamento\n");
	printf("(3) Torneio Ninja\n");
	printf("(4) Mercado\n");
	printf("(5) Restaurante\n");
	printf("(6) Casa\n\n\n");
	printf("(7) SAIR\n\n");
	
//Aqui está estrutura switch que ira acionar uma fução correspondente ao item do menu
         printf("Escolha uma opção:\n\n");
         int opcao =1;
    	while(opcao != 0){
    	scanf("%d",&opcao);
		switch(opcao){
		       
		       case 1 : 
		              printf("uma função foi chamada");
		              break;
		       case 2 : 
		              printf("uma outra função foi chamada");
		              break;
		       default:
		              printf("opção invalida");
		              break;
		}
	  }
	
	return 0;
	
}


//Função de Abertura de jogo 
int abertura(){
	printf("****************** Ninjas Combat **********************\n\n");
	system("pause");
	system("cls");
	
	
	menu_vila();
	
	return 0;
}



//Função mostrando as skins do personagens aqui ele poderá colocar acessorios  

void  casa(){ 
   printf("\n**********Casa********\n\n");
    printf("Ghenisson                         Level ->   \n\n");
    printf(" Chakra->                           Quantidade->        \n");
    printf(" Armas->                            Level->        \n");
    printf(" Taijutsu->                          Level->        \n");
    printf(" Jutsu->                              Level->        \n");
	printf(" Invocação ->                     Level->        \n\n");
    
    printf(" Armazen \n");
}

int main(int argc, char *argv[])
{
	
	
	
	setlocale(LC_ALL, "Portuguese");
	abertura();
	
	

    
	return 0;
}
