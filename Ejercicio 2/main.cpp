#include <iostream>
#include <list>
#include <stack>
using namespace std;
int main(){
    list <float> decimalList {1.1, 2.2, 3.3, 4.4, 5.5};
    stack <float, list<float>> decimalStack(decimalList);
    cout << "Lista" << endl;
    while(!decimalList.empty()){
        cout << decimalList.front() << endl;
        decimalList.pop_front();
    }

    decimalStack.push(5.5);
    decimalStack.push(6.6);
    decimalStack.push(7.7);

    cout << "Elemento en la cima: " << decimalStack.top() << endl;
    decimalStack.pop();

    cout << "Nuevo elemento despues del pop: " << decimalStack.top() << endl;

    return 0;

}