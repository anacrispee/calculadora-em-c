//Aluna: Ana cristina Pereira, graduanda em Téc. ADS na UNIVALI Itajaí/SC.
//O seguinte código foi desenvolvido na IDE DevC++ e testada também no software VisualStudio com MingW.

#include <stdio.h>
//inclusão da biblioteca de entrada e saída de dados.
#include <locale.h>
//inclusão de biblioteca para acentuação.

int main() {
    float a, b, r;
    char opcao;
    //declaração de variáveis.
    setlocale(LC_ALL, "Portuguese");
    //configuração do código para linguagem portuguesa para uso de acentuação.    

    printf("Informe o primeiro número:\n");
    scanf("%f", &a);
    //Entrada de dados do primeiro número a ser manipulado.
    
    printf("Escolha a operação que deseja fazer:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Porcentagem\n");
    printf("6 - Potencicação\n");
    scanf("%s", &opcao);
    //Listagem e entrada de dados de qual operação o usuário deseja realizar com os números.

    /*Inicialmente pensei em utilizar um sistema declarando funções para cada operação,
    mas optei por utilizar a estrututura switch case.*/
    switch (opcao) {
        case '1':
        	printf("Informe o segundo número:\n");
    		scanf("%f", &b);
            r=a+b;
            printf("O resultado eh %f", r);
            break;
        case '2':
        	printf("Informe o segundo número:\n");
    		scanf("%f", &b);
            r=a-b;
            printf("O resultado é %f", r);
            break;
        case '3':
        	printf("Informe o segundo número:\n");
    		scanf("%f", &b);
            r=a*b;
            printf("O resultado é %f", r);
            break;
        case '4':																	//Nas demais operações, o sistema pedirá o segundo nímero
        	printf("Informe o segundo némero:\n");									//normalmente, contudo, na operação de divisão, utilizei uma
    		scanf("%f", &b);														//estrutura de repetição caso o número informado for 0, para
    		while (b==0) {															//que o usuário insira um número diferente de 0.
    			printf("O numero divisor não pode ser zero, informe outro:\n");
    			scanf("%f", &b);
			}
            r=a/b;
            printf("O resultado é %f", r);
			break;
        case '5':
        	printf("Informe o segundo número:\n");
    		scanf("%f", &b);
            r=(a*b)/100;
            printf("O resultado é %f", r);
            break;
        case '6':																	//No caso da operação de potenciação, ele não pede o segundo
            r=a*a;																	//número, pois a potenciação acontece apenas com um número,
            printf("O resultado é %f", r);											//que é o primeiro informado.
            break;
        default:
            printf("Opção inválida!");
            break;
    }
    return 0; 
}
