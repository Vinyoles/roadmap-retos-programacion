/*
 * EJERCICIO:
 * - Crea ejemplos utilizando todos los tipos de operadores de tu lenguaje:
 *   Aritméticos, lógicos, de comparación, asignación, identidad, pertenencia, bits...
 *   (Ten en cuenta que cada lenguaje puede poseer unos diferentes)
 * - Utilizando las operaciones con operadores que tú quieras, crea ejemplos
 *   que representen todos los tipos de estructuras de control que existan
 *   en tu lenguaje:
 *   Condicionales, iterativas, excepciones...
 * - Debes hacer print por consola del resultado de todos los ejemplos.
 *
 * DIFICULTAD EXTRA (opcional):
 * Crea un programa que imprima por consola todos los números comprendidos
 * entre 10 y 55 (incluidos), pares, y que no son ni el 16 ni múltiplos de 3.
 *
 * Seguro que al revisar detenidamente las posibilidades has descubierto algo nuevo.
 */

#include <stdio.h>

int main(){

    /**
     * Ejemplos de operadores.
     * */

    //operadores aritmeticos
    int a = 3 + 4;
    int b = 3 - 4;
    int c = 3 * 4;
    double d = 3.0 / 4;
    int e = 3 % 4;
    printf("arithmetic operators: %i, %i, %i, %f, %i \n", a, b, c, d, e);

    //operadores lógicos
//    int logicError = true && false; //compillation error. It works including <stdbool.h>
    int logicA = 1 && 0; //false
    int logicB = 1 & 0;  //false
    int logicC = 1 || 0; //true
    int logicD = 1 | 0;  //true
    printf("operadores logicos: %i, %i, %i, %i \n", logicA, logicB, logicC, logicD);

    //operadores de comparación
    int boolA = 4 == 4.0; //true
    int boolB = 2 == 4;   //false
    int boolC = 4 != 5;   //true
    int boolD = 4 > 6;    //false
    int boolE = 4 < 6;    //true
    int boolF = 4 <= 4;   //true
    int boolG = 6 >= 4;   //true
    printf("operadores de comparacion: %i, %i, %i, %i, %i, %i, %i \n", boolA, boolB, boolC, boolD, boolE, boolF, boolG);


    return 0;
}
