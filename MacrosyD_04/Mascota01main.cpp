/*

Tittle: Macros y directivas de procesamiento
Created by: Yamil Antonio Meléndez Morales y Emilio Argueta
Fuentes: https://www.youtube.com/watch?v=5kfYJY-acDE
        código ejemplo de clase
Date: 12/11/23

Nota: Los otros códigos que tienen extensión .h se los envio con correo, ya que
en la asignación solo dejar subir .cpp
*/

#include<bits/stdc++.h>
#include "Mascota01.h"
#include "Perro.h"
#include "Gato.h"
//Definición de constantes
#define Pi 3.1416
#define E 2.7182 

using namespace std;

int main(){
 //objeto de clase padre
    Mascota01 mascota1 = Mascota01("Roger", "Perro", 3, 45 );
    cout<<"Mi nombre es: "<<mascota1.getNombre()<<", soy un "<<mascota1.getTipo()<<", tengo "<<mascota1.getEdad()<<" años"<<", y peso "<<mascota1.getPeso()<<" kilos"<<endl;
    mascota1.comer();
    //Operación con constante
    float z = mascota1.getEdad() * Pi; 
    cout<<"Operación: Edad * Pi es: "<<z<<endl;
    
//Objeto de la clase perro
    Perro perro1 = Perro("Logan", "Perro", 4, 45, "Inquieto", "Weimaraner" );
    cout<<"Mi nombre es: "<<perro1.getNombre()<<", soy un "<<perro1.getTipo()<<", tengo "<<perro1.getEdad()<<"años"<<", peso "<<perro1.getPeso()<<"kilos"<<", soy "<<perro1.getComportamiento()<<" y mi raza es "<<perro1.getRaza()<<endl;
    perro1.vejez(4);
    //Operación con constante
    float u = perro1.getPeso()* E;
    cout<<"Operación: Peso del perro * e es: "<<u<<endl;


//Objeto de la clase gato
    Gato gato1 = Gato("Albert", "Gato siames", 2, 3, "naranja", "Garfield");
    cout<<"Mi nombre es: "<<gato1.getNombre()<<", soy un "<<gato1.getTipo()<<", tengo "<<gato1.getEdad()<<" años"<<", peso "<<gato1.getPeso()<<" Kilo"<<", mi color es "<<gato1.getColor()<<", me apodan "<<gato1.getApodo()<<endl;
    gato1.rascarseGato();
    cout<<endl;
    //Operación con constante
    float w = (gato1.getPeso()) / E;
    cout<<"Operación: Peso del gato / E es: "<<w<<endl;

//Definición de una operación TCP con macro
    float x = gato1.getEdad();
    #define trinomio(x) (pow(x, 2)+ 2*x + 1)
    cout<<"El nuevo valor de x es: "<<trinomio(x)<<endl;

}