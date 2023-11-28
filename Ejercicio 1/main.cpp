#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    cout << "Nombres" << endl;

    vector<string> nombres;

    nombres.push_back("Juan");
    nombres.push_back("Pedro");
    nombres.push_back("Maria");
    nombres.push_back("Jose");
    nombres.push_back("Luis");

    vector<string>::iterator it;
    for(it = nombres.begin(); it != nombres.end(); it++){
        cout << *it << endl;
    }
    cout << "Numeros" << endl;

    vector<int> numeros;

    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);

    vector<int>::iterator it2;
    for(it2 = numeros.begin(); it2 != numeros.end(); it2++){
        cout << *it2 << endl;
    }
}