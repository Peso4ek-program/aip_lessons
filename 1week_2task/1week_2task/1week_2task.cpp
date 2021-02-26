#include <iostream>
#include <iomanip> // чтобы работал setprecision
#include <cmath>
#define PI 3.14159265


/*
 Ромб, площадь и периметр, Вариант 5
*/
int main()
{
    float a;
    float b;
    float S;
    float P;

    std::cout << "Vvedite storonu and odin ugol romba: ";
    std::cin >> a >> b;
    P = a * 4;
    if (b < 180 && b >= 0);
    S = (a * a * sin(b * PI / 180));

    std::setprecision(7);
    std::cout << "Perimetr = " << P << std::endl
        << "Ploshad = " << S << std::endl;
    return 0;
}
