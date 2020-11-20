#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int maximum(int M[], int a)
{
    int i;
    int max;
    max = M[0];

    for (i = 1; i < a; i++)
    {
        if (M[i] > max)
        {
            max = M[i];
        }
    }
    return max;
}


int minimum(int N[], int b)
{
    int i = 0;
    int min = 0;
    min = N[0];

    for (i = 1; i < b; i++)
    {
        if (N[i] < min)
        {
            min = N[i];
        }
    }
    return min;
}

int main()
{
    int i = 0;
    int table[50];
    int size = 0;
    int max = 0;
    int min = 0;

    cout << "Enter size of table: ";
    cin >> size;

    cout << endl << "Enter the " << size << " number: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "number [" << i+1 << "] : ";
        cin >> table[i];
    }

    max = maximum(table, size);
    min = minimum(table, size);
    cout << endl << "In this table the biggest element is (" <<max << ") and the smallest elements is: (" << min << ")" << endl << endl;
}









