#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    double areaOfTriangle = ((A * C) / 2);
    double areaOfCircle = 3.14159 * C * C;
    double areaOfTrapezium = ((A + B)*1/2)* C;
    double areaOfSquare = B * B;
    double areaOfRectangle = A * B;

    cout << fixed << setprecision(3) << "TRIANGULO: " << areaOfTriangle << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << areaOfCircle << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << areaOfTrapezium << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << areaOfSquare << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << areaOfRectangle << endl;
    return 0;
}