#include <iostream>
#include <cmath>
using namespace std;

//��������� ������� ����� � ����������.
//������������ ��� �������.�.�.���� ���������, ��� ����� ����� ��������� ��� � ������ ��� �� ������ �������.
//������� ������������ ������ ����������� ��������� �(������� ���&&) � ���(������� ��� ��� ������������ ������� || ).


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