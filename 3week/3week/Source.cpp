#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;


int main(){
    float x, y;
    const float r = 1;
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    bool r1 = l < r;
    bool area1 = y > abs(x);
    if (r1 && area1) {
        std::cout << "y = " << y << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "Da, vxotid" << std::endl;

    }
    else {
        std::cout << "y = " << y << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "Net,ne vxodit" << std::endl;
    }
}