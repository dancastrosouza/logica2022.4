#include <iostream>
#include <string>

using namespace std;

int main (){
  //Incremento = ++
  //Decremento = --
  
  cout << "Operador de incremento" << endl;
  int i = 0, i2= 0;
  cout << "Pre= " << ++i << endl; //pre-incrementar
  cout << "Pos= " << i2++ << endl; //pre-incrementar
  cout << "Pos= " << i2 << endl;
  
  cout << endl; 

 i = 0;
 i2 = 0;
 cout << "Pre = " << --i << endl; //pre-decrementar
 cout << "Pos= " << i2-- << endl; //pos-decrementar
 cout << "Pos- " << i2 <<endl;

 system("pause");
 return 0;

}