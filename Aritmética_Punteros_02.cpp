/*
Tittle: Aritmética de punteros 
Created by: Emilio Argueta Moctezuma, Yamil Antonio Meléndez Morales
Date: 06/09/2023

*/

#include <iostream>

int main() {
  using namespace std; 
  int suma ,resta, multiplicacion; 

  const size_t size = 5;
  int* p_numeros {new(nothrow) int[size]{1, 2, 3, 4, 5}};

  //Sum of the first element and the last one
  suma = *(p_numeros) + *(p_numeros+4);
  cout<<"Suma: "<<suma<<endl;
  
  resta = *(p_numeros + 3) - *(p_numeros + 1);
  cout<<"Resta: "<<resta<<endl;
  // Cycle for multiplication 
  for (size_t i = 0; i<5; i++){
    cout<<"Multiplicaciones: "<< *(p_numeros+i)*10<<endl;
  }
  
  
}