#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3;
    cin >> c1;
    cin >> c2;
    cin >> c3;
    cout << "A = " << c1 << "," << " B = " << c2 << "," << " C = " << c3 << endl;
    cout << "A = " << c2 << "," << " B = " << c3 << "," << " C = " << c1 << endl;
    cout << "A = " << c3 << "," << " B = " << c1 << "," << " C = " << c2 << endl;
}