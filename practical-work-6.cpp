#include <iostream>
#include <cmath>
using namespace std;


using namespace std;

int main()
{
    setlocale(LC_ALL, "uk_UA.UTF-8");

    int x, a, b, c;
    double f;

    cout << "Введіть x: ";
    cin >> x;

    cout << "Введіть a: ";
    cin >> a;

    cout << "Введіть b: ";
    cin >> b;

    cout << "Введіть c: ";
    cin >> c;

    if (c < 0 && a != 0)
        f = (-a * pow(x, 3) - b) / c;
    else if (c > 0 && a == 0)
        f = -c;
    else
        f = a * x + 5 * b;

    cout  << "F = " << f << endl;
    cout << "Edit code for github";

    return 0;
}
