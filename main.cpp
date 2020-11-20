#include <iostream>
using namespace std;

int AND(int a, int b, int c)
{
    int d;
    d = a & b & c;
    return d;
}

int OR(int a, int b, int c)
{
    int e;
    e = a | b | c;
        return e;
}



int main()
{
    int a,b,c,d,e;
    cout << "Table de verite | AND | OR" << endl << endl;

        a = 0;
        b = 0;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl;

        a = 0;
        b = 0;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl;

        a = 0;
        b = 1;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl;

        a = 0;
        b = 1;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl;

        a = 1;
        b = 0;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl;

        a = 1;
        b = 0;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl;

        a = 1;
        b = 1;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl;

        a = 1;
        b = 1;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << "       " << a << b << c << "      |  " << d << "  |  " << e << endl << endl;


    return 0;
}







