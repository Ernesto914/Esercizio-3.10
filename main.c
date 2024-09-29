#include <stdio.h>

int main(void)
{
    int eta;
    float prezzobiglietto;
    printf("Inserisci la tua età: ");
    scanf("%d", &eta);
    if (eta < 5){
        prezzobiglietto = 0.00;}
    else if (eta >= 5 && eta <= 10){
        prezzobiglietto = 1.00;}
    else if (eta >= 11 && eta <= 17){
        prezzobiglietto = 1.50;}
    else if (eta >= 18 && eta <= 26){
        prezzobiglietto = 2.00;}
    else if (eta > 26){
        prezzobiglietto = 3.00;}
    printf("Il costo del biglietto è di %.2f euro", prezzobiglietto);
    return 0;
}
