#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double R, A;
    cin >> R;
    A = (4.0/3) * 3.14159 * R * R * R;
    cout << fixed << setprecision(3) << "VOLUME = " << A << endl;
    return 0;
}