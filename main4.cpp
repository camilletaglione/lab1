#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    cout << "Enter positive integer: ";
    cin >> a;

    for (int i = 0; i <= 10; i++)
    {
        cout << endl << a << " X " << i << " = " << a*i;
    }

    cout << endl << endl;

    return 0;

}
