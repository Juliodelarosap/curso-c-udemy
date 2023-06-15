#include<stdio.h>

int main(){

/*int q = 12;
float w = 12.323;
char e = 'w';

ejemplo de como funciona 

printf("%i %.3f %c",q,w,e);*/

//int q;
//float w;
char e[40];//[]para hacer una cadena o string 


    /*printf("Escribe el valor de la variable a (int)\n ");
        scanf("%i", &q);para escanear lo que escribe el
el usuario y guardarlo para despues y lleva ese formato
la variable %i y donde se guardara seguido de , &q*/ 
//printf("El valor que escribiste es %i", q);

    printf("Escribe tu nombre\n ");
        fgets(e,40,stdin);/*Es importante tener en cuenta que la función gets fue eliminada en el estándar C11, lo que significa que si usas esta función, 
        puede que no funcione en un compilador que siga las normas de C11, 
        por lo que tu código perdería portabilidad. Por razones de portabilidad no deberías usar esta función, sino fgets*/
       //gets(e); La función gets en C se usa para escanear o leer una línea de texto desde un dispositivo de entrada estándar (stdin) y almacenarla en la variable String. Cuando lee el carácter de nueva línea, la función C gets terminará 
        //scanf("%s", &e); scanf solo sirve si no se da espacio,cuando es char es %c y string %s

    /*printf("Escribe el valor de la variable a (float)\n ");
        scanf("%f", &w);

            printf("El valor que escribiste (i) es %i\n", q);
            printf("El valor que escribiste (f) es %.4f\n", w);*/
            printf("Tu nombre es %s", e);//cuando es una cadena de caracteres se coloca %s []si tiene esto, sino, pues se coloca %c

    return 0;
}