#include <iostream>
using namespace std;

int main() {
    int month;
    setlocale(LC_ALL, "uk_UA.UTF-8");
    cout << "Увведiть номер мiсяця: ";
    cin  >> month;

    switch (month) {
        case 12:
        case 1:
        case 2:
            cout << "зима";
            break;

        case 3:
        case 4:
        case 5:
            cout << "весна";
            break;

        case 6:
        case 7:
        case 8:
            cout << "літо";
            break;

        case 9:
        case 10:
        case 11:
            cout << "осінь";
            break;

        default:
            cout << "Невірний номер місяця";
    }

    return 0;
}