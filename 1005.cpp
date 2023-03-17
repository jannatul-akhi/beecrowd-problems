#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    double A, B;
    double X;
    cin >> fixed >> setprecision(1) >> A;
    cin >> fixed >> setprecision(1) >> B;
    X = ((A*3.5)+(B*7.5))/(3.5+7.5);
    cout << fixed << setprecision(5) << "MEDIA = " << X << endl;
    return 0;
}