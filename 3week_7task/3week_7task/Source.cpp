#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

//�������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������, ������ �� ����� � �������������� �������.
//������� �

int main() {
    const float r = 1; //radius
    float x, y;

    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    bool area2 = y < 0 && x < 0 && y < x;
    bool r1 = l < r;



    if ((r1 && (x < y)) || (area2 && r1)) {
        std::cout << "y = " << y << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "Da vxodit" << std::endl;

    }
    else {
        std::cout << "y = " << y << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "Net ne vxodit" << std::endl;
    }
}