#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//PROTOTIPADO FUNC
int cargarArray(int array[]);
void recorrerArray(int array[], int validos);
void sumarValidos(int array[], int validos);
void pasarArrayPila(int array[], int validos, Pila *pila4);
int cargarArray100(float array[]);
void sumarValidosFloat(float array[], float validos);
int cargarArrayChar(char array[]);
void mostrarValidosChar(char array[], int validos);
int encontrarDatoChar(char array[], int validos, int dato);

///func para el 7
int posicionMenor(char array7[],int posicionInicioI ,int validos7);
void ordenacionSeleccion(char array7[], int validos7);
void insertarDatoChar(char arreglo[],int i2, int dato);
void ordenacionInsercionChar(char arreglo[],int validos);
///Func para el 8
void elementoMayor(char array8[], int validos8);
///FUNC PARA EL 9
int cargarArrayRand(int arreglo[]);
void copiarArray(int array[],int array2[], int validos);
int comparandoArrays(int array[], int array2[], int validos);
///FUNC PARA EL 10
void invirtiendoArreglo(int array[], int array2[], int validos);
///FUNC PARA EL 11
void ordenacionInsercion(int arreglo[],int validos);
void insertar(int arreglo[],int i2, int dato);
///FUN PARA EL 12
int intercalarArreglos(char array1[], char array2[],char array3[], int validos);
///FUNC PARA EL 13
void sumaArreglos(int arreglo1[], int arreglo2[], int validos);

int main()
{
/**1.Hacer una función que reciba como parámetro
un arreglo de números enteros y permita que
el usuario ingrese valores al mismo por teclado.
La función debe retornar la cantidad de
elementos cargados en el arreglo
(o pueden utilizar como puntero válidos).*/
/*
int miArreglo[10];
int validos;

validos = cargarArray(miArreglo);//Cargando mi arreglo
*/
/**2.Hacer una función que reciba como parámetro un arreglo y
la cantidad de elementos (válidos)
cargados en él y los muestre por pantalla.*/

//recorrerArray(miArreglo, validos); //Mostrar validos de un arreglo

/**3.Hacer una función que reciba como parámetro un arreglo y
la cantidad de elementos (válidos)
cargados en él y calcule la suma de sus elementos. */
//validos = cargarArray(miArreglo);
//sumarValidos(miArreglo, validos);

/**4.Hacer una función que reciba como parámetro un arreglo,
la cantidad de elementos (válidos)
cargados en él y una Pila. La función debe copiar los elementos
del arreglo en la pila.*/
/*
Pila pila4;
inicpila(&pila4);
validos = cargarArray(miArreglo);

pasarArrayPila(miArreglo, validos, &pila4);
printf("Los elementos del arreglos pasados a la pila son:");
mostrar(&pila4);
printf("\n");
*/

/**5.Realizar una función que sume los elementos de un arreglo de
números reales (float) de dimensión 100. (se recomienda hacer una función para
cargar y otra para mostrar para este tipo de dato asociado al arreglo)*/
/*
float arreglo[100];
//Funcion para cargar
float validos1 = cargarArray100(arreglo);
printf("Mostrando la cargados del array: %.0f", validos1);
printf("\n");
printf("Mostrando la suma de los datos cargados: ");
sumarValidosFloat(arreglo, validos1);
printf("\n");

*/

/**6.Realizar una función que indique si un elemento dado se encuentra
en un arreglo de caracteres.*/
/*
///Creamos el arrreglo como char
char array6[50];
char dato, datoEncontrado;
///Cargamos el arreglo con datos char:
int validos6 = cargarArrayChar(array6);
///Mostrar los validos
mostrarValidosChar(array6, validos6);
printf("\n");
printf("Que letra desea buscar en el arreglo? ");
fflush(stdin);
scanf("%c", &dato);

datoEncontrado = encontrarDatoChar(array6, validos6, dato);
if(datoEncontrado == 1){
    printf("DATO ENCONTRADO !! \n");
    printf("%c", dato);
}else{
    printf("DATO NO ENCONTRADO \n");
}
*/
/**7.Realizar una función que inserte un carácter en un arreglo ordenado
alfabéticamente,conservando el orden.*/
/*
char array7[100];
char dato;
//Cargamos el arreglo con datos char
int validos7 = cargarArrayChar(array7);
//Mostrar los validos
mostrarValidosChar(array7, validos7);
printf("\n");
printf("INGRESANDO UNA LETRA: ");
fflush(stdin);
scanf("%c", &dato);
printf("\n");
array7[validos7] = dato;
printf("MOSTRANDO EL ARREGLO CON EL DATO INSERTADO:\n ");
mostrarValidosChar(array7, validos7 + 1);
printf("\n");
ordenacionInsercionChar(array7, validos7);
//Mostrar los validos en teoria ya ordenados
printf("MOSTRANDO LAS LETRAS YA ORDENADAS \n");
mostrarValidosChar(array7, validos7);
printf("\n");
*/
/**8.Realizar una función que obtenga el máximo carácter de un arreglo dado.*/
/*
char array8[100];
//Cargamos el arreglo con datos char
int validos8 = cargarArrayChar(array8);
//Mostrar los validos
mostrarValidosChar(array8, validos8);
printf("\n");
elementoMayor(array8, validos8);
printf("\n");
*/

/**9.Realizar una función que determine si un arreglo es capicúa.*/
/*
int arreglo[5];
int arreglo2[5];

//CARGAMOS EL ARREGLO ALEATORIAMENTE
int validos9 = cargarArrayRand(arreglo);
//MOSTRAMOS VALIDOS
printf("ARREGLO 1: \n");
recorrerArray(arreglo, validos9);
printf("\n");
printf("\n");
copiarArray(arreglo, arreglo2, validos9);
//MOSTRANDO ARRAY2:
printf("ARREGLO 2 \n");
recorrerArray(arreglo2, validos9);
//COMPROBANDO SI ES CAPICUA:
printf("\n");
printf("\n");
int comparacion = comparandoArrays(arreglo, arreglo2, validos9);
printf("\n");
if(comparacion == 0){
    printf("NO ES CAPICUA :c");
}else{
    printf("ES CAPICUA!!!");
}
printf("\n");
*/
/**10.Realizar una función que invierta los elementos de un arreglo.
(sin utilizar un arreglo auxiliar)*/
/*
int arreglo[10];
int arreglo2[10];
int validos10 = cargarArray(arreglo);
//MOSTRAMOS LOS VALIDOS:
recorrerArray(arreglo, validos10);
printf("\n");
//INVIRTIENDO UN ARREGLO:
invirtiendoArreglo(arreglo, arreglo2, validos10);
//MOSTRANDO EL ARREGLO INVERTIDO:
recorrerArray(arreglo2, validos10);
printf("\n");
*/
///11.Ordenar un arreglo según los siguientes métodos: Seleccion, insercion.
/*
int arreglo10[10];
int validos10 = cargarArray(arreglo10);
//MOSTRANDO VALIDOS:
recorrerArray(arreglo10, validos10);
printf("\n");
//ORDENANDO ARREGLO POR METODO DE INSERCION.
ordenacionInsercion(arreglo10, validos10);
//MOSTRAMOS EL ARREGLO ORDENADO:
recorrerArray(arreglo10, validos10);
printf("\n");
*/

/** 12.Dados dos arreglos ordenados alfabéticamente, crear un tercer arreglo con
los elementos de los dos primeros intercalados, de manera que quede un arreglo
también ordenado alfabéticamente. */

char arreglo1[10];
char arreglo2[10];
char arreglo3[10];

//CARGANDO ARREGLOS:
printf("ARREGLO 1: \n");
int validos1 = cargarArrayChar(arreglo1);
mostrarValidosChar(arreglo1, validos1);
printf("\n");
printf("\n");
printf("ARREGLO 2: \n");
int validos2 = cargarArrayChar(arreglo2);
mostrarValidosChar(arreglo2, validos2);
printf("\n");
printf("\n");
int validos3 = validos1 + validos2;
int validosTotal3 = intercalarArreglos(arreglo1, arreglo2, arreglo3, validos3);
//ORDENANDO EL ARREGLO 3
//ordenacionInsercionChar(arreglo3, validos3);
printf("MOSTRANDO ARREGLO 3: \n");
mostrarValidosChar(arreglo3, validosTotal3);

/**13.Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector con la
suma del contenido de todo los elementos anteriores al índice actual:
{1,6,12,19,27}.*/
/*
int vector[5] = {1,5,6,7,8};
int sumaVector[5];
int validos = 5;
recorrerArray(vector, validos);
sumaArreglos(vector, sumaVector, validos);
*/
}


///FUNCIONES:
int cargarArray(int array[]){
    int i;
    i = 0;

    char eleccion = 's';

    while(eleccion == 's' && i<10){
        printf("Ingrese un numero para cargarle a su arreglo: \n");
        fflush(stdin);
        scanf("%i", &array[i]);
        i++;

        printf("Pulse s si desea continuar \n");
        fflush(stdin);
        scanf("%c", &eleccion);

    }
    return i;
}

void recorrerArray(int array[], int validos){
    int i;
    for(i = 0; i<validos; i++){
        printf("|%i|", array[i]);
    }
}

void sumarValidos(int array[], int validos){
    int i, acumulador;
    acumulador = 0;
    for(i = 0; i < validos; i++){
        acumulador = acumulador + array[i];
    }
    printf("%i", acumulador);
}

void pasarArrayPila(int array[], int validos, Pila *pila4){
    int i;
    for(i = 0; i<validos; i++){
        apilar(pila4, array[i]);
    }
}

//EJERCICIO 5 FUNCIONES:
int cargarArray100(float array[]){
int i = 0;
char eleccion = 's';
while(eleccion == 's' && i < 100){
        printf("Ingrese un numero para cargarle a su arreglo: \n");
        fflush(stdin);
        scanf("%f", &array[i]);
        i++;

        printf("Pulse s si desea continuar \n");
        fflush(stdin);
        scanf("%c", &eleccion);

    }
    return i;
}
void sumarValidosFloat(float array[], float validos){
    int i;
    float acumulador;
    acumulador = 0;
    for(i = 0; i < validos; i++){
        acumulador = acumulador + array[i];
    }
    printf("%.2f", acumulador);
}
//EJERCICIO6:
int cargarArrayChar(char array[]){
int i = 0;
char eleccion = 's';

while(eleccion == 's' && i < 100){
    printf("Ingrese una letra para cargarle: ");
    fflush(stdin);
    scanf("%c", &array[i]);
    i++;

    printf("Pulse s si desea continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    }
    return i;
}
//Mostrar los validos
void mostrarValidosChar(char array[], int validos){
    int i;
    for(i = 0; i < validos; i++){
        printf("|%c|  ", array[i]);
    }
}
//Encontrar el dato
int encontrarDatoChar(char array[], int validos, int dato){
    int i;
    i = 0;
    int flag = 0;
    while(i < validos){
        if(array[i] == dato){
            flag = 1;
        }
        i++;
    }
    return flag;
}

//FUNCIONES PARA EL EJERCICIO 7
///Esta funcion va a funcionar gracias a la de abajo.
/// Retorna la posicion en el arreglo del menor elemento.
int posicionMenor(char array7[],int posicionInicioI ,int validos7){

    int menor = array7[posicionInicioI];
    int posMenor = posicionInicioI;
    int i = posicionInicioI + 1;

    while(i < validos7){
            if(menor > array7[i]){
                menor = array7[i];
                posMenor = i;
            }
        i++;
    }
    return posMenor;


}
///Esta funcion ordena el arreglo a partir de la posicion actual.
void ordenacionSeleccion(char array7[], int validos7){
    int posMenor;
    int aux;
    int i = 0;

    while(i < validos7){
        posMenor = posicionMenor(array7, i, validos7);
        aux = array7[posMenor];
        array7[posMenor] = array7[i];
        array7[i] = aux;
        i++;
    }

}
///FUNCION POR INSERCION:
void insertarDatoChar(char arreglo[], int i2, int dato){
    int i = i2;
    while(i >= 0 && dato < arreglo[i]){
        arreglo[i + 1] = arreglo[i];
        i--;
    }
    arreglo[i + 1] = dato;
}
void ordenacionInsercionChar(char arreglo[],int validos){
    int i2 = 0;
    while(i2 < validos -1){
        insertarDatoChar(arreglo, i2, arreglo[i2 + 1]);
        i2++;
    }
}




///FUNCION PARA EL EJERCICIO 8
void elementoMayor(char array8[], int validos8){
    ordenacionSeleccion(array8, validos8);
    printf("\n");
    printf("El elemento mayor es: %c", array8[validos8 - 1]);
}

///FUNCION PARA EL EJERCICIO 9
int cargarArrayRand(int arreglo[]){
    int i;
    srand(time(NULL));

    for(i = 0; i < 5; i++){
        arreglo[i] = (rand()%7+1);
    }
    return i;
}

void copiarArray(int array[],int array2[], int validos){
    int i;
    for(i = 0; i < validos; i++){
        array2[i] = array[i];
    }
}
int comparandoArrays(int array[], int array2[], int validos){
    int i = 0;
    int flag = 1;
    while(i < validos){
        if(array[i] == array2[validos - i - 1]){
           flag = 1;
        }else{
           flag = 0;
           break;
        }
        i++;
    }
    return flag;
}
///FUNCIONES PARA EL 10
void invirtiendoArreglo(int array[], int array2[], int validos){
    int i;
    for(i = 0; i < validos; i++){
        array2[i] = array[validos - i - 1];
    }
}
///FUNCIONES PARA EL 11
void insertar(int arreglo[],int i2, int dato){
    int i = i2;
    while(i >= 0 && dato < arreglo[i]){
        arreglo[i + 1] = arreglo[i];
        i--;
    }
    arreglo[i + 1] = dato;
}
void ordenacionInsercion(int arreglo[],int validos){
    int i2 = 0;
    while(i2 < validos -1){
        insertar(arreglo, i2, arreglo[i2 + 1]);
        i2++;
    }
}
///FUNCION PARA EL 12
int intercalarArreglos(char array1[], char array2[], char array3[], int validos){
    int i = 0;
    while(i < validos){
        array3[i] = array1[i];
        i++;
        array3[i] = array2[i - 1];
        i++;
    }

    return validos;


}

///FUNC PARA EL 13
void sumaArreglos(int arreglo1[], int arreglo2[], int validos){
    int i = 0;
    //printf("\n");
    arreglo2[i] = arreglo1[i];
    //printf("%i", arreglo2[i]);

    while(i < validos - 1){
           arreglo2[i + 1] = arreglo1[i] + arreglo1[i + 1] ;
           arreglo2[i + 1] = arreglo2[i] + arreglo1[i + 1];
        i++;

    }
    printf("\n");
recorrerArray(arreglo2, validos);
}
