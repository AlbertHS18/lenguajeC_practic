#include <stdio.h>

int obtenerCaraOpuesta(int resultado) {
    return 7 - resultado;
}

int main() {
    int numeroDado;
    char* numerosEnLetras[] = {"uno", "dos", "tres", "cuatro", "cinco", "seis"};

    printf("=== Simulador de Lanzamiento de Dado ===\n");

    while (1) {
        
        printf("\nIntroduzca el número del dado (1 a 6, -1 para salir): ");
        scanf("%d", &numeroDado);

        if (numeroDado == -1) {
            break; 
        }

        if (numeroDado < 1 || numeroDado > 6) {
            printf("ERROR: Número incorrecto. Debe ser un valor entre 1 y 6.\n");
        } else {
            int caraOpuesta = obtenerCaraOpuesta(numeroDado);

            
            printf("En la cara opuesta está el \"%d (%s)\" .\n", caraOpuesta, numerosEnLetras[caraOpuesta - 1]);
        }
    }

    printf("\nGracias por usar el Simulador de Lanzamiento de Dado.\n");
    return 0;
}
