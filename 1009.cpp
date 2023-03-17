#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    string sellerName;
    double fixedSalary, totalSale, totalSalary;
    cin >> sellerName >> fixedSalary >> totalSale;

    totalSalary = fixedSalary+(totalSale*0.15);
    
    cout << fixed << setprecision(2) << "TOTAL = R$ " << totalSalary << endl;
    return 0;
}