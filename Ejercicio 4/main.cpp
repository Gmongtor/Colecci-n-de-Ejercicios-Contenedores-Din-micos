#include <iostream>
#include <valarray>
using namespace std;
int main(){
    valarray<double> valores = {7.3, 2.9, 9.5, 1.7, 3.5};

    valarray<double> suma = valores + 10.0;
    valarray<double> raiz = sqrt(valores);
    valarray<double> resta = valores - 10.0;
    valarray<double> multiplicacion = valores * 10.0;
    valarray<double> division = valores / 10.0;
    valarray<double> potencia = pow(valores, 2);
    valarray<double> logaritmo = log(valores);
    valarray<double> exponencial = exp(valores);







}