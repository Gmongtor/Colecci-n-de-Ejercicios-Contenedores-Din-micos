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

}