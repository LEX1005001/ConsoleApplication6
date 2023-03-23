#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "RU");
	int number, digit, i, newNumber;
	cout << "Число: "<<endl;
	cin >> number;
	i = 0;
	newNumber = 0;
	while (number > 0)
	{
		digit = number % 10;
		if ((digit != 3) && (digit != 6))
		{
			newNumber = newNumber + digit * pow(10, i);
			i++;
		}

		number = number / 10;
	}
	cout << "Новое число: " << newNumber;
}
