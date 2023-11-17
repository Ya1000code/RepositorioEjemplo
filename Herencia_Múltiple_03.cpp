

/*Tittle: 
Created by: Emilio Argueta Moctezuma
            Yamil Antonio Meléndez
Date: 22/10/23
Instructions: 
Realicen un nuevo codigo con los siguientes requerimientos:
- Creen dos clases padres con sus respectivos metodos y atributos.
- Creen dos clases hijas de esas clases padres.
- En ambas clases padres, definan un metodo con el mismo nombre, pero distinto comportamiento
- En una de las clases hijas hagan una metodo desde el cual se pueda acceder a las funciones con el mismo nombre de las clases padres.
- En la otra clase hija hagan los cambios necesarios para que pueda acceder a ambas funciones (por separado), sin crear conflicto de ambigüedad.
- Definan los destructores para cada clase y revisen que sucede cuando el codigo termina.
*/
#include <iostream>
using namespace std;

//Clases padres
class Mascota01{
public:
string nombre;
string tipo;
int edad;

//Metodos
void ladrar(){
cout<<"Guau guau"<<endl;
}
void comer(){
 cout<< "Me gusta comer croquetas"<<endl;
}
//Constructor
  Mascota01(string nombre, string tipo, int edad){
  this->nombre = nombre;
  this->tipo = tipo;
  this->edad = edad;


}
~Mascota01(){
  cout<<"Destruyendo el objeto (clase Mascota01)"<<endl;
}
};

class Mascota02{
public:
string apodo;
int peso;
string color;

//Metodos
void maullar(){
cout<<"miau miau"<<endl;
}
void comer(){
 cout<< "Como whiskas"<<endl;
}
Mascota02(string apodo, string color, int peso){
this->apodo = apodo;
this->color = color;
this->peso = peso;
}
~Mascota02(){
  cout<<"Destruyendo el objeto (clase Mascota02)"<<endl;
}
};

//Clases hijas
class Perro: public Mascota01, public Mascota02{
public:
string comportamiento;

//Constructor
Perro(string nombre, string tipo, int edad, string apodo, string color, int peso, string comportamiento):
Mascota01(nombre, tipo, edad), Mascota02(apodo, color, peso){
  this->comportamiento = comportamiento;

}

//Metodos
void jugar(){
  cout<<"Juego en el patio"<<endl;
}
//Método para acceder a las funciones comer de las clase padre
void comer(){
  Mascota01::comer();
  Mascota02::comer();
}
//Destructor
~Perro(){
  cout<<"Destruyendo el objeto (clase Perro)"<<endl;
}

};

class Gato :public Mascota01,  public Mascota02{
  public:
  string comportamiento;

  //Constructor
  Gato(string nombre, string tipo, int edad, string apodo, string color, int peso, string comportamiento):
  Mascota01(nombre, tipo, edad), Mascota02(apodo, color, peso){
    this->comportamiento = comportamiento;}

  ~Gato(){
  cout<<"Destruyendo el objeto (clase Gato)"<<endl;
}

//Metodos
void jugar(){
cout<<"Juego dentro de la casa";
}
//Método para acceder a la función comer() por separado
void comerpedigree(){
  Mascota01::comer();
}
void comerwhiskas(){
  Mascota02::comer();
}


};


int main() {
  cout<<"Objeto de Perro"<<endl;
  Perro Perro01 = Perro ("Logan", "Weimaraner",3, "POl", "Gris", 46, "Inquieto");
  Perro01.ladrar();
  Perro01.jugar();
  Perro01.comer();
  cout<<endl;

  cout<<"Objeto de Gato"<<endl;
  
  Gato Gato01 = Gato("Zapato", "Siames", 4, "Pelusa", "Dorado", 4, "Flojo");
  Gato01.maullar();
  //Accedemos a la función comer de Mascota02
  Gato01.comerwhiskas();
  return 0;
}