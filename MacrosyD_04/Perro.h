#include "Mascota01.h"

class Perro: public Mascota01{
public:
    string comportamiento;
    string raza;

    //Constructor parametrizado
    Perro(string nombre, string tipo, int edad, int peso, string comportamiento, string raza):
    Mascota01(nombre, tipo, edad, peso){
        this->comportamiento = comportamiento;
        this->raza = raza;
    }
    //Destructor
    ~Perro(){
    cout<<"Destruyendo el objeto (clase Perro)"<<endl;
    }

    //Getteres y setters
    string getComportamiento(){
        return comportamiento;
    }
    void setComportamiento(string comportamiento){
        this->comportamiento = comportamiento;
    }
        string getRaza(){
        return raza;
    }
    void setRaza(string comportamiento){
        this->raza = raza;
    }
    //Métodos propios
    void rascarse(){
        cout<<"Me rasco porque tengo pulgas"<<endl;
    }
    void vejez(int edad){
        if (this->edad>8){
            cout<<"Soy un perro viejo"<<endl;
        }
        else{
            cout<<"Aun soy un perro joven"<<endl;
        }
    }

};