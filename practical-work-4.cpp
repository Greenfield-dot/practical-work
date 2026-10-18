#include <iostream>
using namespace std;

int main()
{
    
    float A, B, C;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Enter C: ";
    cin >> C;

    cout << (A > 0 && B > 0 && C > 0 ? "True" : "False");

    return 0;
}
