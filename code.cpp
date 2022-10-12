#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "");

    int a, x, y;
    cout << "Введи сторону: ";
    cin >> a;
    cout << "Введи координату точки по оси X: ";
    cin >> x;
    cout << "Введи координату точки по оси Y: ";
    cin >> y;
    if ((abs(x) < (a/2)) and (abs(y) < (a/2)))
        cout << "Точка внутри квадрата";
    else if ((abs(x) == (a / 2)) and (abs(y) < (a / 2)) or (abs(x) < (a / 2)) and (abs(y) == (a / 2)) or (abs(x) == (a / 2)) and (abs(y) == (a / 2)))
        cout << "Точка на границе квадрата";
    else
        cout << "Точка вне квадрата";
}

