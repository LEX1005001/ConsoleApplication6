#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    setlocale(0, "ru");
    cout << "Введите число:";
    int n;
    cin >> n;
    cout << "Делиться без остатка на: " << endl;

    n = (n < 0) ? -n : n;

    for (int i = -n; i <= n; i++) {
        if (i == 0)
        {
          continue;
        }   
        if (n % i == 0)
        {
            cout << i << ' ';
        }
    }
}
