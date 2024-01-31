#include <stdio.h>
#include <stdbool.h>

bool luhnCheck(long long number) {
    int sum = 0;
    bool alternate = false;
    
    while (number != 0) {
        int digit = number % 10;
        
        if (alternate) {
            digit *= 2;
            
            if (digit > 9) {
                digit = (digit % 10) + 1;
            }
        }
        
        sum += digit;
        number /= 10;
        alternate = !alternate;
    }
    
    return (sum % 10 == 0);
}

int main() {
    long long number;
    
    printf("Ingrese un numero de 16 digitos: ");
    scanf("%lld", &number);
    
    if (number >= 1000000000000000 && number <= 9999999999999999) {
        if (luhnCheck(number)) {
            printf("El numero cumple con el algoritmo de Luhn.\n");
        } else {
            printf("El numero no cumple con el algoritmo de Luhn.\n");
        }
    } else {
        printf("El numero no tiene 16 digitos.\n");
    }
    
    return 0;
}
