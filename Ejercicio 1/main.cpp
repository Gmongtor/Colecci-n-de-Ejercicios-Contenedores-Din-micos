#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
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
    vector<int> numeros;
    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);
}