#include <stdio.h>
#include <iostream>

using namespace std;

int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
  int nbr, i = 0, j;

  cout << "Enter the number of terms: ";
  cin >> nbr;

  cout << "The " << nbr << " first terms in the Fibonacci series are: " << endl << endl;

  for (j = 1; j <= nbr; j++)
  {
    cout << fibonacci(i) << " ";
    i++;
  }
  cout << endl << endl;

  return 0;
}
