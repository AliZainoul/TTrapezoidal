#include <iostream>
#include <cmath>

using namespace std;
#include "Ttrapezoidal.hpp"


double g(double x){return 1+x;};
float square(float x){return x*x;};
long double cube(long double x){return x*x*x;};

int main ()
{
  // Trapezoidal Params
  int n;
  n = 100000;

  double a_g = 0.0;
  double b_g = 1.0;
  double integral_g=0.0;
  integral_g = trapezoidal(a_g, b_g, g, n);
  cout << "Function 1+x integrated from " <<
  a_g << " to " << b_g << " is : " << integral_g << "\n";
  getchar();

  float a_square = 0.00;
  float b_square = 1.00;
  float integral_square=0.00;
  integral_square = trapezoidal(a_square, b_square, square, n);
  cout << "Function square integrated from " <<
  a_square << " to " << b_square << " is : " << integral_square<< "\n";
  getchar();

  long double a_cube = -1.000000;
  long double b_cube = 1.000000;
  long double integral_cube=0.00000;
  integral_cube = trapezoidal(a_cube, b_cube, cube, n);
  cout << "Function cube integrated from " <<
  a_cube << " to " << b_cube << " is : " << integral_cube<< "\n";

}
