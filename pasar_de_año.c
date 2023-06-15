//un estudiante solo tiene derecho a pasar de año solo si no reprueba 3 materias 
//si reprueba 4 materias recursa el año

#include <stdio.h>

int main(){

    int materias;

    printf("Cuantas materias a reprovado");
    scanf("%d",&materias);

    if (materias > 3){
        printf("No puedes pasar de año");
    }   else{
        printf("Puedes pasar de año");
        }




    return 0;
}