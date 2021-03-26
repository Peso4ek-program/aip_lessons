#include <iostream>
#include <cmath>
using namespace std;

//Дана функция y = f(x).Найти значение функции по x :
// y = 2x - 10, если x > 3
//y = 10, если x = 3
//y = (2 * x + 1)2 - 1, если x < 3


int main()
{
    float x;
    const float eps = 3.0000001;
    float y;

    std::cout << "Vvedi x= " << std::endl;
    std::cin >> x;

    if (x > eps) {
        y = 2 * x - 10;
    }

    if (x == eps) {
        y = 10;
    }

    if (x < eps) {
        y = (2 * x + 1) * (2 * x + 1) - 1;
    }

    std::cout << "  Otvet " << y << std::endl;
}