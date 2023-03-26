#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "RU");
	int A, B;
	cout << "Введите число A: ";
	cin >> A;
	for (int i = A - 1; i > 1; i--)
	{
		B = i;
		if ((A % (B * B) == 0) && (A % (B * B * B) != 0))
		{
			cout << B << "\n";
		}
	}
}

