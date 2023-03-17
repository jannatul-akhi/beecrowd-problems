#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    int codeOfProd1, numberOfUnitOfProd1;
    double priceOfProd1;
    int codeOfProd2, numberOfUnitOfProd2;
    double priceOfProd2;
    double payAmonut;
    cin >> codeOfProd1 >> numberOfUnitOfProd1 >> priceOfProd1 >> codeOfProd2 >> numberOfUnitOfProd2 >> priceOfProd2;

    payAmonut = (numberOfUnitOfProd1*priceOfProd1) + (numberOfUnitOfProd2*priceOfProd2);
    
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << payAmonut << endl;
    return 0;
}