#include<stdio.h>

int main() 
{

char  operacao;
double numero1, numero2, resultado;


    printf ("Coe, testa essa calc ae\n");
    printf ("qual operacao voce quer fazer? (+, -, *, ou /)\n");
    scanf ("%c", &operacao);


    printf ("Digite o primeiro numero:\n");
    scanf ("%lf", &numero1);

    printf ("Digite o segundo numero:\n");
    scanf ("%lf", &numero2);

switch (operacao)
{
case '+':
    resultado = numero1 + numero2;
    break;
case '-':
    resultado = numero1 - numero2;
    break;
case '*':
    resultado = numero1 * numero2;
    break;

case '/':
    if (numero2 == 0){
        printf("divisao por 0 nao e permitida");
        return 1;
    } else {
        resultado = numero1 / numero2;
    break;

    }
    
    

default:
printf("erro: voce escreveu uma operacao invalida");
return 1;
}

printf("%.1lf %c %.1lf, = %.1lf",  numero1, operacao, numero2, resultado);
    return 0;
}