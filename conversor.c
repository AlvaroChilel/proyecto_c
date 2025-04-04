#include <stdio.h>

void convertirMoneda(int opcionOrigen, int opcionDestino, float cantidad) {
    float resultado;

    // Tasas de cambio de ejemplo
    float tasaQuetzalUSD = 0.13;  // 1 Quetzal = 0.13 USD
    float tasaQuetzalEUR = 0.12;  // 1 Quetzal = 0.12 EUR
    float tasaUSDQuetzal = 7.8;   // 1 USD = 7.8 Quetzales
    float tasaUSDEUR = 0.93;      // 1 USD = 0.93 EUR
    float tasaEURQuetzal = 8.2;   // 1 EUR = 8.2 Quetzales
    float tasaEURUSD = 1.07;      // 1 EUR = 1.07 USD

    // Conversión según las opciones seleccionadas
    if (opcionOrigen == 1 && opcionDestino == 2) { // Quetzales -> USD
        resultado = cantidad * tasaQuetzalUSD;
    } else if (opcionOrigen == 1 && opcionDestino == 3) { // Quetzales -> EUR
        resultado = cantidad * tasaQuetzalEUR;
    } else if (opcionOrigen == 2 && opcionDestino == 1) { // USD -> Quetzales
        resultado = cantidad * tasaUSDQuetzal;
    } else if (opcionOrigen == 2 && opcionDestino == 3) { // USD -> EUR
        resultado = cantidad * tasaUSDEUR;
    } else if (opcionOrigen == 3 && opcionDestino == 1) { // EUR -> Quetzales
        resultado = cantidad * tasaEURQuetzal;
    } else if (opcionOrigen == 3 && opcionDestino == 2) { // EUR -> USD
        resultado = cantidad * tasaEURUSD;
    } else {
        printf("Conversión no válida.\n");
        return;
    }

    printf("Resultado: %.2f\n", resultado);
}

int main() {
    int opcionOrigen, opcionDestino;
    float cantidad;

    printf("Bienvenido al conversor de monedas\n");
    printf("Elija la moneda de origen:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Ingrese la opción (1-3): ");
    scanf("%d", &opcionOrigen);

    if (opcionOrigen < 1 || opcionOrigen > 3) {
        printf("Opción no válida.\n");
        return 1;
    }

    printf("Elija la moneda de destino:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Ingrese la opción (1-3): ");
    scanf("%d", &opcionDestino);

    if (opcionDestino < 1 || opcionDestino > 3 || opcionOrigen == opcionDestino) {
        printf("Opción no válida o mismo origen y destino.\n");
        return 1;
    }

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    // Llamar a la función para realizar la conversión
    convertirMoneda(opcionOrigen, opcionDestino, cantidad);

    return 0;
}
