#include <iostream>
#include <cmath>
using namespace std;
#include "trapezoidal.hpp"


double g(double x){return 1+x;};
double square(double x){return x*x;};
double cube(double x){return x*x*x;};

int main ()
{
  //cout << trapezoidal(0, 1, integrand(), 100000) << endl;

  double integral=0.0;

  // Trapezoidal Params
  double a,b;
  int n;
  n = 100000;

  a = 0;
  b = 1;
  integral = trapezoidal(a, b, g, n);
  cout << "Function 1+x integrated from " <<
  a << " to " << b << " is : " << integral << "\n";
  getchar();

  a = 0;
  b = 1;
  integral = trapezoidal(a, b, square, n);
  cout << "Function square integrated from " <<
  a << " to " << b << " is : " << integral<< "\n";
  getchar();

  a = -1;
  b = 1;
  integral = trapezoidal(a, b, cube, n);
  cout << "Function cube integrated from " <<
  a << " to " << b << " is : " << integral<< "\n";

}
