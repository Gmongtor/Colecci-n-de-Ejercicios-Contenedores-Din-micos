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

    cout << "Suma +10: ";
    for(double v : suma) cout << v << " ";
    cout << endl;

    cout << "Resta -10: ";
    for(double v : resta) cout << v << " ";
    cout << endl;

    cout << "Multiplicacion *10: ";
    for(double v : multiplicacion) cout << v << " ";
    cout << endl;

    cout << "Division /10: ";
    for(double v : division) cout << v << " ";
    cout << endl;

    cout << "Potencia ^2: ";
    for(double v : potencia) cout << v << " ";
    cout << endl;

    cout << "Logaritmo: ";
    for(double v : logaritmo) cout << v << " ";
    cout << endl;

    cout << "Exponencial: ";
    for(double v : exponencial) cout << v << " ";
    cout << endl;

    return 0;
}