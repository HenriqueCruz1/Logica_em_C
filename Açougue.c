/*1. O Açougue (Controle de Estoque Contínuo)
Um açougue vende carnes com a seguinte tabela de descontos baseada no peso. O programa deve ler os pedidos
continuamente usando a estrutura while e parar apenas quando o usuário digitar um peso igual ou menor que 0.
•Bovino (B): Até 5 kg, desconto de 3%. Acima de 5 kg, desconto de 5%.
•Frango (F): Até 5 kg, desconto de 2%. Acima de 5 kg, desconto de 4%.
•Requisito: Calcule o valor final de cada cliente e exiba um totalizador ao final do dia.*/

#include <stdio.h>

int main(){

    float peso;
    float preco;
    float valor_total;
    char pedido;

    printf("Bovino(B) ou Frango(F)?");
    scanf("%c", &pedido);

    print("Digite o peso da carne: ");
    scanf("%f", &peso);

    printf(pedido);

}