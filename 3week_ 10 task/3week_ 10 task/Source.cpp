#include <iostream>
#include <cmath>
using namespace std;

//Применена функция синус и окружность.
//Заштриховано ДВЕ области.Т.е.надо учитывать, что точка будет находится ИЛИ в первой или во второй области.
//Поэтому используется связка логического оператора И(пишется как&&) и ИЛИ(пишется как две вертикальные палочки || ).


int main() {
    const float r = 1;
    float x, y;
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);

    bool area1 = (x > 0) && (y > sin(x));
    bool area2 = (x < 0) && (y < sin(x));

    if ((l < r) && (area1 || area2))
        std::cout << "Da, popadaet" << std::endl;
    else
        std::cout << "Net, ne popadaet" << std::endl;

}