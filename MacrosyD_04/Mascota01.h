#ifndef Mascota01_h
#define Mascota01_h

using namespace std;

class Mascota01{
public:
string nombre;
string tipo;
int edad;
int peso;

//Constructor parametrizado
Mascota01(string nombre, string tipo, int edad, int peso){
    this->nombre = nombre;
    this->tipo = tipo;
    this->edad = edad;
    this->peso = peso;
}
//Destructor
~Mascota01(){
  cout<<"Destruyendo el objeto (clase Mascota01)"<<endl;
}
//Getters y setters
    void setNombre(string nombre){
        this->nombre = nombre;
    }
    string getNombre(){
        return nombre;
    }
    void setTipo(string tipo){
        this->tipo = tipo;
    }
    string getTipo(){
        return tipo;
    }
    void setEdad(int edad){
        this->edad = edad;
    }
    int getEdad(){
        return edad;
    }
        void setPeso(int edad){
        this->peso = peso;
    }
    int getPeso(){
        return peso;
    }
    //Metodos
    void jugar(){
    cout<<"Me gusta jugar con mi dueño"<<endl;
    }
    void comer(){
     cout<< "Me gusta comer croquetas"<<endl;
    }
};









#endif