/*los operadores de asignacion pueden ser 
int a;
int b;
int c;
o 
int a,b,c; pero si le queremos dar el mismo valor
a = 10;
b= 10; es igual de ineficiente 
se podria hacer 
a=b=c=10;
si ponemos 
int a,b,c;
a=10;
a = a + 3; sira que su valor es 13
es lo mismo decir a += 3; que se vio en el programa 
de operadores en c 
pero esto es ineficiente asi que usaremos 
*/
#include <stdio.h>

int main (){


int a,b,c;
a=b=c=10;

printf("El valor de a,b,c es : %i %i %i",a,b,c);

return 0;
}