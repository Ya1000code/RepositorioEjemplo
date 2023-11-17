/*
Tittle: Sobrecarga de constructores y funciones amigas
Created by: POR EMILIO ARGUETA MOCTEZUMA Y YAMIL ANTONIO MELÉNDEZ MORALES
Date: 22/10/23
Instructions:
Creen un codigo sobre POO de tematica libre con los siguientes requerimientos:
- Realice una clase que tenga por lo menos una clase y una funcion amiga
- Sobrecargue sus constructores
- Agregue el destructor de la clase
- Agregue un constructor copia
*/
#include <iostream>
using namespace std;


class pollito{ //CLASE POLLITO
public:
    bool rostisado;

    pollito(){
      rostisado=false;
      cout<<"Contructor normal\n";
      
    }

    pollito(bool estado){
      rostisado=estado;
      cout<<"Contructor parametrizado\n";
    }

    pollito(pollito &p){
      rostisado=p.rostisado;
      cout<<"Contructor copion\n";
    }

    ~pollito(){
      cout<<"destruyo\n";
    }
    friend void hornito(pollito &p , float temp);//FUNCION AMIGA

};

void hornito(pollito &p , float temp){//FUNCION AMIGA
  if(temp<200){
    p.rostisado=false;
  }else{
    p.rostisado=true;
  }
  cout<<"el pollito esta rostizado?: "<<p.rostisado<<endl;
}
int main() {

  pollito adobado;
  pollito salado(false);
  pollito feo(adobado);

  float temp=220;
  hornito(adobado,temp);
}