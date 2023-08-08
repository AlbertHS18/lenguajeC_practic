#include <stdio.h>

int main() {
    float montoDOP, montoUSD, montoEUR;
    
    printf("Ingrese el monto en pesos dominicanos (DOP): ");
    scanf("%f", &montoDOP);
   
    float tasaUSD;
    printf("Ingrese la tasa de cambio de DOP a USD: ");
    scanf("%f", &tasaUSD);
    
    float tasaEUR;
    printf("Ingrese la tasa de cambio de DOP a EUR: ");
    scanf("%f", &tasaEUR);


    if (montoDOP <= 0 || tasaUSD <= 0 || tasaEUR <= 0) {
        printf("Error: El monto y las tasas deben ser diferentes de cero y positivos.\n");
    } else {

        montoUSD = montoDOP / tasaUSD;
        montoEUR = montoDOP / tasaEUR;
        
        printf("%.2f DOP equivalen a %.2f USD\n", montoDOP, montoUSD);
        printf("%.2f DOP equivalen a %.2f EUR\n", montoDOP, montoEUR);
    }
    return 0; }