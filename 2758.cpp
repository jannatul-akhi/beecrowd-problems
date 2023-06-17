#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1, num2;
    double num3, num4;
    cin >> fixed >> setprecision(1) >> num1;
    cin >> fixed >> setprecision(2) >> num2;
    cin >> fixed >> setprecision(3) >> num3;
    cin >> fixed >> setprecision(4) >> num4;
    int integral1 = num1;
    int integral2 = num2;
    int integral3 = num3;
    int integral4 = num4;
    

    cout << fixed << setprecision(6) << "A = " << num1 << fixed << setprecision(6) << ", B = " << num2 << endl;
    cout << fixed << setprecision(6) << "C = " << num3 << fixed << setprecision(6) << ", D = " << num4 << endl;

    cout << fixed << setprecision(1) << "A = " << num1 << fixed << setprecision(1) << ", B = " << num2 << endl;
    cout << fixed << setprecision(1) << "C = " << num3 << fixed << setprecision(1) << ", D = " << num4 << endl;

    cout << fixed << setprecision(2) << "A = " << num1 << fixed << setprecision(2) << ", B = " << num2 << endl;
    cout << fixed << setprecision(2) << "C = " << num3 << fixed << setprecision(2) << ", D = " << num4 << endl;

    cout << fixed << setprecision(3) << "A = " << num1 << fixed << setprecision(3) << ", B = " << num2 << endl;
    cout << fixed << setprecision(3) << "C = " << num3 << fixed << setprecision(3) << ", D = " << num4 << endl;
    
    cout << fixed << setprecision(3) << "A = " << scientific << uppercase  << num1 << fixed << setprecision(3) << ", B = " << scientific << uppercase  << num2 << endl;
    cout << fixed << setprecision(3) << "C = " << scientific << uppercase  << num3 << fixed << setprecision(3) << ", D = " << scientific  << uppercase  << num4 << endl;
    
    cout << "A = " << integral1 << ", B = " << integral2 << endl;
    cout << "C = " << integral3 << ", D = " << integral4 << endl;

    return 0;
}

