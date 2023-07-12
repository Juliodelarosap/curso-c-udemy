#include <stdio.h>
#include <string.h>

int main (){

    char tarjeta[20];

    printf("Digite el numero de tarjeta: \n");
    scanf("%s", tarjeta);

    if(tarjeta[0]=='4' && (strlen(tarjeta)==13|| strlen(tarjeta)==16)){
        printf("Su tarjeta es VISA\n");
    }
    else if(tarjeta[0]=='5' && strlen(tarjeta)==16 && (tarjeta[1]>='1' && tarjeta[1]<='5')){

        printf("Su tarjeta es MASTERCARD\n");
    }

    else {
            printf("Su tarjeta es invalida\n");

    }
    


    return 0;
}