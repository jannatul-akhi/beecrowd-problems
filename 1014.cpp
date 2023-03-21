#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int X;
    double Y, Z;
    cin >> X >> Y;
    
    Z = X/Y;

    cout << fixed << setprecision(3) << Z << " km/l" << endl;
    return 0;
}