#include<stdio.h>
#include"cs50.h"
#include<ctype.h>
#include<string.h>

//Declaración de variables globales tipo puntero para los arreglos dinámicos
int *arreglo=NULL,*arregloOriginal=NULL;

//Declaración de variables
int largoArreglo=0,contarSwap=0;

//Declaración funciones útiles para la tarea (ya implementadas) 
void casosTareas(string opcion); //NO MODIFICAR
void mostrarArreglo (void); //NO MODIFICAR

//Declaracion de funciones a implementar
void bubbleSort(void);
void selectionSort(void);
void hibridoSort(void);


int main(int intc, string argv[]){
    //Solicitando el número
    while (largoArreglo<=0)
    {
        printf("Ingrese un numero positivo: ");
        largoArreglo=GetInt();
    }

    //Creando un arreglo dinamico de largo largoArreglo
    arreglo=(int*)malloc(sizeof(int)*largoArreglo);
    arregloOriginal=(int*)malloc(sizeof(int)*largoArreglo);
    
    //Generando 3 casos de numeros
    casosTareas("aleatorio");
    casosTareas("ordenado");
    casosTareas("inverso");
}

//Funcion para imprimirpor pantalla los resultados y reiniciar el arreglo
void imprimirCopia(string nombreAlgoritmo){ 
    printf("%s realizo %i cambios de numeros\n",nombreAlgoritmo,contarSwap);
    for(int i=0;i<largoArreglo;i++)            
        arreglo[i]=arregloOriginal[i];
    contarSwap=0;
}

//Funcion para llamar los distintos tipos de casos a evaluar en la tarea
void casosTareas(string opcion){
    //Generación del arreglo según el caso a evaluar
    printf("\nCaso %s\n",opcion);
    if (strcmp(opcion,"aleatorio")==0)
        for(int i=0;i<largoArreglo;i++)
            arreglo[i]=rand()%(largoArreglo*5);
    if (strcmp(opcion,"ordenado")==0) 
        for(int i=0;i<largoArreglo;i++)
            arreglo[i]=i;
    if (strcmp(opcion,"inverso")==0)
        for(int i=0;i<largoArreglo;i++)
            arreglo[i]=largoArreglo-i;
    for(int i=0;i<largoArreglo;i++)            
        arregloOriginal[i]=arreglo[i];            
        
    //Evaluación y despliegue de resultados
    bubbleSort();
    imprimirCopia("Bubble Sort");
    selectionSort();
    imprimirCopia("Selection Sort");
    hibridoSort();
    imprimirCopia("Hibrido Sort");
}

//Funcion para mostrar el arreglo
void mostrarArreglo(){
    printf(" ");      
    for(int i=0;i<largoArreglo;i++)            
        printf("%i ",arreglo[i]);
    printf("\n");      
}    

void bubbleSort(void){
    //ESCRIBA SU CÓDIGO AQUÍ
}

void selectionSort(void){
    //ESCRIBA SU CÓDIGO AQUÍ
}

void hibridoSort(void){
    //ESCRIBA SU CÓDIGO AQUÍ
}
