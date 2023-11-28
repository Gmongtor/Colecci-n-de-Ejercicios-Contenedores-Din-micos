#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = {7, 2, 8, 1, 5};
    sort(v.begin(), v.end());
    cout << "Vector ordenado: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

}