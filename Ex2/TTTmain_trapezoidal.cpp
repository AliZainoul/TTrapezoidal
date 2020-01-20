#include <iostream>
#include <cmath>
using namespace std;
#include "TTTTrapezoidal.hpp"

//template <class T>
long double g(long double x){return 1+x;};
long double square(long double x){return x*x;};
long double cube(long double x){return x*x*x;};

int main ()
{
  //cout << trapezoidal<long double,integrand>(0.0, 1.0, 100000) << endl;

  long double integral=0.0;

  // Trapezoidal Params
  long double a,b;
  int n;
  n = 100000;

  a = 0;
  b = 1;
  integral = trapezoidal<long double,g>(a, b, n);
  cout << "Function 1+x integrated from " <<
  a << " to " << b << " is : " << integral << "\n";
  getchar();

  a = 0;
  b = 1;
  integral = trapezoidal<long double,square>(a, b, n);
  cout << "Function square integrated from " <<
  a << " to " << b << " is : " << integral<< "\n";
  getchar();

  a = -1;
  b = 1;
  integral = trapezoidal<long double,cube>(a, b, n);
  cout << "Function cube integrated from " <<
  a << " to " << b << " is : " << integral<< "\n";

}
