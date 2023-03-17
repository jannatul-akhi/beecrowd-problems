#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    int eNum, wHour;
    double amount, salary;
    cin >> eNum >> wHour >> amount;
    salary = wHour * amount;
    cout << "NUMBER = " << eNum << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salary << endl;
    return 0;
}