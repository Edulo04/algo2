/*Escribir un programa que permita hacer las operaciones de suma, resta,
multiplicación y división de números complejos. El tipo complejo ha de definirse
como una estructura.*/
#include <stdio.h>
typedef struct
{
    double num_real;
    double num_ima;
} Complejo;
// funciones para las operaciones
// funcion para la suma

Complejo suma(Complejo a, Complejo b)
{
    Complejo resultado;
    resultado.num_real = a.num_real + b.num_real;
    resultado.num_ima = a.num_ima + b.num_ima;
    return resultado;
}
// funcion para la resta
Complejo resta(Complejo a, Complejo b)
{
    Complejo resultado;
    resultado.num_real = a.num_real - b.num_real;
    resultado.num_ima = a.num_ima - b.num_ima;
    return resultado;
}
// funcion para la multiplicacion
Complejo multiplicacion(Complejo a, Complejo b)
{
    Complejo resultado;
    resultado.num_real = (a.num_real * b.num_real) - (a.num_ima * b.num_ima);
    resultado.num_ima = (a.num_real * b.num_ima) + (a.num_real * b.num_ima);
    return resultado;
}
// funcion para la division
Complejo dividir(Complejo a, Complejo b)
{
    Complejo resultado;
    double denominador = (b.num_real * b.num_real) + (b.num_ima * b.num_ima);
    resultado.num_real = ((a.num_real + b.num_real) + (a.num_ima * b.num_ima)) / denominador;
    resultado.num_ima = ((a.num_real + b.num_ima) - (a.num_real * b.num_ima)) / denominador;
    return resultado;
}
int main()
{
    Complejo complejo1, complejo2;
    printf("ingrese la primera parte real e imaginaria del primer numero:");
    scanf("%lf %lf", &complejo1.num_real, &complejo1.num_ima);
    printf("ingrese la primera parte real e imaginaria del segundo numero:");
    scanf("%lf %lf", &complejo2.num_real, &complejo2.num_ima);

    // imprimos todas las operaciones
    printf("Resultado suma: %lf + %lfi", suma(complejo1, complejo2));
    printf("Resultado resta: %lf + %lfi", resta(complejo1, complejo2));
    printf("Resultado multiplicacion: %lf + %lfi", multiplicacion(complejo1, complejo2));
    printf("Resultado division: %lf + %lfi", dividir(complejo1, complejo2));

    return 0;
}