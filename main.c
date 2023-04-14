#include <stdio.h>
int main()
{
    int opcion, cantidad;
    float precio, total;
    char producto;
 
    do {
        printf("\n\nMenu de facturacion");
        printf("\n---------------------");
        printf("\na. Facturar producto");
        printf("\nb. Imprimir factura");
        printf("\nc. Salir");
        printf("\n\nElija una opcion: ");
        scanf("%c", &opcion);
        fflush(stdin);
 
        switch (opcion) {
            case 'a':
                printf("\n\nListado de productos");
                printf("\n---------------------");
                printf("\na) Llantas (Precio: $150)");
                printf("\nb) Kit Pastillas de freno (Precio: $55)");
                printf("\nc) Kit de embrague (Precio: $180)");
                printf("\nd) Faro (Precio: $70)");
                printf("\ne) Radiador (Precio: $120)");
                printf("\n\nElija un producto: ");
                scanf("%c", &producto);
                fflush(stdin);
                printf("Ingrese la cantidad de unidades: ");
                scanf("%d", &cantidad);
                fflush(stdin);
 
                // calcular el precio total del producto
                switch (producto) {
                    case 'a':
                        precio = 150.0;
                        break;
                    case 'b':
                        precio = 55.0;
                        break;
                    case 'c':
                        precio = 180.0;
                        break;
                    case 'd':
                        precio = 70.0;
                        break;
                    case 'e':
                        precio = 120.0;
                        break;
                    default:
                        printf("Opcion no valida\n");
                        continue; // volver al menu principal
                }
                total = precio * cantidad;
                printf("\n\nEl total a pagar por %d unidades de %c es: $%.2f", cantidad, producto, total);
                break;
 
            case 'b':
                // codigo para imprimir factura
                printf("\n\nFactura\n---------------------");
                // aqui irian los datos de la factura
                break;
 
            case 'c':
                printf("\n\nGracias por utilizar nuestro servicio de facturacion\n");
                break;
 
            default:
                printf("\n\nOpcion no valida\n");
                break;
        }
 
    } while (opcion != 'c');
 
    return 0;
}



