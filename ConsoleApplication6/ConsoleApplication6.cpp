#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(0, "ru");
	int a, sum = 0;
	cin >> a;
	for (int b = a; b > 0; b /= 10)
	{
		sum += b % 10;
	}
	if (sum * sum * sum == a * a) {
		cout << "Подходит" << endl;
	}
	else
	{
		cout << "Не подходит" << endl;
	}
}

