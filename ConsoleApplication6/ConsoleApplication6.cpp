#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "ru");
	int n1;
	int n2;
	int n3;
	int counter1 = 0;

	for (int i = 100; i < 1000; i++) 
	{
		n1 = i / 100;
		n2 = i / 10 % 10;
		n3 = i % 10;


		if (n1 != n2 && n1 != n3 && n2!=n3) {
			counter1++;
		}
	}
cout << "Количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные ->" << counter1;

}
