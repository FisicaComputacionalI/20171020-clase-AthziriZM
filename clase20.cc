//Programa Clase 20 Octubre 2017
//Athziri Zúñiga Méndez

#include <iostream>
using namespace std;

int main()
{
  //definimos el número N
  int N=0;
  //Definimos la frase con la que pediremos un numero
  cout<<"Dame un numero entero"<<endl;
  cin>>N;
  //Damos la cantidad de inicio de M y F
  int M=1;
  int F=1;
  //Damos la formula que necesitamos
  while (M!=N){
    //en caso de que no sea verdadera la formula anterior se sigue a sumar 1 a M y de ahi se sigue hasta que sea verdadero.
    M=M+1;
    F=F*M;
  }
  //Damos nombre a nuestro resultado.
  cout<<"Valor final"<<F<<endl;
  return 0;
}
