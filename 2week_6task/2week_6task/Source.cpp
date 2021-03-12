#include <iostream>
#include <fstream>

float sum(float a, float b);
//Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной покупки из 300 г конфет и 400 г печенья; 
//б) трех покупок, каждая из 2 кг печенья и 1 кг 800 г конфет.



int main()
{
    float a;
    float b;
    float c;
    float d;

    std::ofstream fo;
    std::ifstream fi;

    std::cout << "Privet, man, please, napishi price the 1kg sladostey and 1kg pechenek:" << std::endl;
    std::cin >> a >> b;
    std::cout << "Ok, how many you wanna buy sladostey?" << std::endl;
    std::cin >> c;
    std::cout << "Ok, how many you wanna buy pechenek?" << std::endl;
    std::cin >> d;

    fo.open("in.txt");
    fo << a << " " << b << " " << c << " " << d;
    fo.close();

    fi.open("in.txt");
    fi >> a >> b >> c >> d;
    fi.close();

    std::cout << "Price of pechenek " << sum(a, c) << "$" << std::endl;
    std::cout << "Price of sladostey " << sum(b, d) << "$" << std::endl;
}

float sum(float a, float b) {
    return (a * b);
}