#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    double A, B, C;
    double X;
    cin >> fixed >> setprecision(1) >> A;
    cin >> fixed >> setprecision(1) >> B;
    cin >> fixed >> setprecision(1) >> C;
    X = ((A*2)+(B*3)+(C*5))/(2+3+5);
    cout << fixed << setprecision(1) << "MEDIA = " << X << endl;
    return 0;
}