#include <iostream>
#include <cmath>
using namespace std;


//Дана функция y = f(x).Найти значение функции по x :
//y = 2x - 15, если x > 2
//y = 5, если x = 2
//y = 3 * | x - 1 | -8, если x < 2


int main() {
    float x;
    const float eps = 2.0000001;
    float y;

    std::cout << "Vvedi x= " << std::endl;
    std::cin >> x;

    if (x > eps) {
        y = 2 * x - 15;
    }

    if (x == eps) {
        y = 5;
    }

    if (x < eps) {
        y = 3 * abs(x - 1) - 8;
    }

    std::cout << "Otvet " << y << std::endl;
}