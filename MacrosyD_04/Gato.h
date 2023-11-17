#include "Mascota01.h"

class Gato: public Mascota01{
public:
    string color;
    string apodo;

    //Constructor parametrizado
    Gato(string nombre, string tipo, int edad, int peso, string color, string apodo):
    Mascota01(nombre, tipo, edad, peso){
        this->color = color;
        this->apodo = apodo;
    }
    //Destructor
    ~Gato(){
    cout<<"Destruyendo el objeto (clase Gato)"<<endl;
    }

    //Getteres y setters
    string getColor(){
        return color;
    }
    void setColor(string color){
        this->color = color;
    }
        string getApodo(){
        return apodo;
    }
    void setApodo(string apodo){
        this->apodo = apodo;
    }
    //Métodos propios
    void rascarseGato(){
        cout<<"Me rasco porque tengo piojos"<<endl;
    }
    void vejezGato(int edad){
        if (this->edad>8){
            cout<<"Soy un Gato viejo"<<endl;
        }
        else{
            cout<<"Aun soy un Gato joven"<<endl;
        }
    }

};