#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

int main(){
    auto square = [](int n) { return n * n; };
    auto numeros = std::make_unique<std::vector<int>>(std::vector<int>{1, 2, 3, 4, 5});
    std::for_each(numeros->begin(), numeros->end(), [&square](const auto& n) {
        std::cout << "Cuadrado de " << n << " es " << square(n) << std::endl;
    });
    return 0;
}
