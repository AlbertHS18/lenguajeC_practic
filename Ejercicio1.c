#include <stdio.h>

int main() {
    int n1, n2; 
    int suma, resta, multiplicacion, division, modulo;
    
   
    printf("Digite el primer número entero: ");
    scanf("%d", &n1);
    

    printf("Digite el segundo número entero: ");
    scanf("%d", &n2);
    
    suma = n1 + n2; 
    resta = n1 - n2; 
    multiplicacion = n1 * n2; 
    
    
    if (n2 != 0) {
        division = n1 / n2; 
        modulo = n1 % n2; 
        } else {
        
        division = 0;
        modulo = 0;
         }
    
    
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    
    if (n2 != 0) {
        printf("División: %d\n", division);
        printf("Módulo: %d\n", modulo);
    } else {
        printf("No se puede dividir por cero.\n");
    }
    
    return 0; 
}
