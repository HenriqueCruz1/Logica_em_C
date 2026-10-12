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
    float desconto;
    char pedido;
    float valor_final;



    printf("Bovino(B) ou Frango(F)?");
    scanf(" %c", &pedido);

    printf("Digite o peso da carne: ");
    scanf("%f", &peso);

    while (peso > 0){

    if (pedido == 'B') {
    preco = 30;

    if (peso <= 5) {
        desconto = valor_total * 0.03;
    } else {
        desconto = valor_total * 0.05;
    }

} else if (pedido == 'F') {
    preco = 15;

    if (peso <= 5) {
        desconto = valor_total * 0.02;
    } else {
        desconto = valor_total * 0.04;
    }
}

valor_final = valor_total - desconto;

printf("Valor da compra: R$ %.2f\n", valor_total);
printf("Desconto: R$ %.2f\n", desconto);
printf("Valor final: R$ %.2f\n", valor_final);

}}