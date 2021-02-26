#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265


/*
Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого
числа., Вариант 5
*/
int main()
{
	float a;
	float kv;
	float ku;

	std::cout << "Vvedite chislo: ";
	std::cin >> a;
	kv = a * a;
	ku = a * a * a;

	std::cout << "kvadrat = " << kv << std::endl
		<< "Kub = " << ku << std::endl;
	return 0;
}
