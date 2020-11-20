#include <iostream>
#include <cmath>

using namespace std;

double circumference(double r)
{
    double circum = 2*M_PI*r;
    return circum;
}

double area(double r)
{
    double area = M_PI*pow(r,2);
    return area;
}

int main()
{
    double radius;
    cout << "Choose a value for radius of circle: ";
    cin >> radius;

    //Circumference
    double c = circumference(radius);
    cout << "The circumference is equal to: " << c << endl;

    //Area
    double a = area(radius);
    cout << "The area is equal to: " << a << endl << endl;

    return 0;
}
