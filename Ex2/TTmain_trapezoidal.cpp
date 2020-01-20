#include <iostream>
#include <cmath>
using namespace std;
#include "TTTrapezoidal.hpp"


double g(double x){return 1+x;};
double square(double x){return x*x;};
double cube(double x){return x*x*x;};

int main ()
{
  double integral=0.0;

  // Trapezoidal Params
  double a,b;
  int n;
  n = 100000;

  a = 0;
  b = 1;
  integral = trapezoidal<g>(a, b, n);
  cout << "Function 1+x integrated from " <<
  a << " to " << b << " is : " << integral << "\n";
  getchar();

  a = 0;
  b = 2;
  integral = trapezoidal<square>(a, b, n);
  cout << "Function square integrated from " <<
  a << " to " << b << " is : " << integral<< "\n";
  getchar();

  a = -1;
  b = 1;
  integral = trapezoidal<cube>(a, b, n);
  cout << "Function cube integrated from " <<
  a << " to " << b << " is : " << integral<< "\n";

}
