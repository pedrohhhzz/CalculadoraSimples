#include <stdio.h>
#include <stdlib.h>

void soma(){
	
	float valor1, valor2, result;
	printf("\nDIGITE UM NUMERO: ");
	scanf("%f", &valor1);
	printf("\nDIGITE OUTRO NUMERO:");
	scanf("%f", &valor2);
	
	result = (valor1 + valor2);
	
	printf("\n	RESULTADO É : %.2f\n\n", result);
	
	system("pause");
	system("cls");
	
	menu();
	
}

void subtracao(){
	
	float valor1, valor2, result;
	printf("\nESCOLHA UM NUMERO:",valor1 );
	scanf("%f", &valor1);
	printf("\nESCOLHA OUTRO VALOR:");
	scanf("%f", &valor2);
	
	result = (valor1 - valor2);
	
	printf("\n	RESULTADO É : %.2f\n\n", result);
	
	system("pause");
	system("cls"); 
	
	menu();
	
}

void multiplicacao(){
	
	float valor1, valor2, result;
	
	printf("\nESCOLHA UM NUMERO:",valor1);
	scanf("%f", &valor1);
	printf("\nESCOLHA OUTRO VALOR:");
	scanf("%f", &valor2);
	
	result = (valor1 * valor2);
	
	printf("\n	RESULTADO É : %.2f\n\n", result);
	
	system("pause");
	system("cls"); 
	
	menu();
	
}

void divisao(){
	
	float valor1, valor2, result;
	
	printf("\nESCOLHA UM NUMERO:",valor1);
	scanf("%f", &valor1);
	printf("\nESCOLHA OUTRO VALOR:");
	scanf("%f", &valor2);
	
	result = (valor1 / valor2);
	
	printf("\n	RESULTADO É : %.2f\n\n", result);
	
	system("pause");
	system("cls"); 
	
		menu();
}


void menu(){
	
	int escolha;
	
	printf("\t\tBem vindo a calculadora em C\n\n"); 
	
	printf("Selecione uma operacao matematica:\n"); 
	    printf("\t1- Adicao\n");
	    printf("\t2- Subtracao\n");
	    printf("\t3- Divisao\n");
	    printf("\t4- Multiplicacao\n");
	    printf("\t5- Sair\n");
	    printf("Operacao: "); 
	    scanf ("%d", &escolha);
	    
	    
	    switch(escolha){
	    	case 1:
	    		soma();
	    	break;
				
			case 2:
				subtracao();
			break;
			
			case 3:
				divisao();
			break;
				
			case 4:	
			
				multiplicacao();
			break;
					
	    	case 5:
	    		
	    		system("exit");
	    		printf("\nFinalizando...\n\n");
	    		
	    	break;	
	    	
	    	
	    	default:
	    		printf("\nComando invalido, tente novamente!\n\n");
	    		system("pause");
	    		system("cls");
	    		menu();
	    		break;
	    	
		}
	
}


int main(int argc, char *argv[]) {
	menu();
	system("pause"); 
	
	
	
	
    return 0; 
	
	
	
}
