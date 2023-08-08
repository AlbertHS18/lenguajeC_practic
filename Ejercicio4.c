#include <stdio.h>

int main() {
    int codigoProducto, cantidad;
    char nombreProducto[50];
    float precioUnitario, descuento, subtotal, itbis, totalGeneral;

    printf("=== Generador de Tickets - MORENO'S ===\n");

    while (1) {
        
        printf("\nIngrese el código del producto (máximo 6 cifras, -1 para salir): ");
        scanf("%d", &codigoProducto);

        if (codigoProducto == -1) {
            break;
        }

        printf("Ingrese el nombre del producto: ");
        scanf(" %[^\n]", nombreProducto);
        printf("Ingrese el precio unitario en pesos (DOP): ");
        scanf("%f", &precioUnitario);
        printf("Ingrese la cantidad de productos: ");
        scanf("%d", &cantidad);
        printf("Ingrese el descuento a aplicar (en %%): ");
        scanf("%f", &descuento);

        subtotal = precioUnitario * cantidad;
        itbis = subtotal * 0.18; 
        totalGeneral = subtotal - (subtotal * (descuento / 100)) + itbis;

        printf("\nTicket de Compra\n");
        printf("===============================================\n");
        printf(" CÓDIGO PRODUCTO |  Nombre    |  PRECIO       \n");
        printf("%-6d           | %s | %.2f\n", codigoProducto, nombreProducto, precioUnitario);
        printf("-----------------------------------------------\n");
        printf(" CANTIDAD | SUBTOTAL |  MONEDA \n");
        printf("%-8d | %.2f     | DOP\n", cantidad, subtotal);
        printf("-----------------------------------------------\n");
        printf(" DESCUENTO | ITBIS (18%%) |  MONEDA \n");
        printf("%.2f%%    | %.2f     | DOP\n", descuento, itbis);
        printf("-----------------------------------------------\n");
        printf(" TOTAL  |       %.2f     | DOP\n", totalGeneral);
        printf("===============================================\n");
    }

    printf("\nGracias por usar el Generador de Tickets.\n");
    return 0;
}
