#include <iostream>
#include "polynomials.h"
using namespace std;

int size = 0;
Polynomials::Polynomials()
{
  degree        = 0;
  coefficients = 0;

}
Polynomials::Polynomials(int degree){
  size = degree + 1;
  _coefficients = new double[degree + 1];
  for (int i = 0; i < size; ++i) {
    _coefficients[i] = 0;
  }
}
Polynomials::Polynomials(const double *coefficients, int count) {
  size = count;
  _degree = count - 1;
  _coefficients = coefficients;
  for (int i = 0; i < size; ++i) {
    _coefficients[i] = coefficients[i];
  }
}
Polynomials::~Polynomials() {
  delete[] _coefficients;
}
int Polynomials::degree() const {
  return _degree;
}
Polynomials Polynomials::add(Polynomials &other) {
  size = (_degree >= other._degree)? _degree : other._degree;
  Polynomials new_poly(size - 1);
  for (int i = 0; i <= (_degree <= other._degree)? _degree : other._degree; ++i) {
    new_poly._coefficients[i] = _coefficients[i] + other._coefficients[i];
  }
  if(_degree >= other._degree){
    for (int i = other._degree; i <= _degree ; ++i) {
      new_poly._coefficients[i] = _coefficients[i];
    }
  } else{
    for (int i = _degree; i <= other._degree ; ++i) {
      new_poly._coefficients[i] = other._coefficients[i];
    }
  }
  return new_poly;
}
Polynomials Polynomials::subFromMy(Polynomials &other) {
  size = (_degree >= other._degree)? _degree : other._degree;
  Polynomials new_poly(size - 1);
  for (int i = 0; i <= (_degree <= other._degree)? _degree : other._degree ; ++i) {
    new_poly._coefficients[i] = _coefficients[i] - other._coefficients[i];
  }
  if(_degree >= other._degree){
    for (int i = other._degree; i <= _degree  ; ++i) {
      new_poly._coefficients[i] =  _coefficients[i];
    }
  } else{
    for (int i = _degree; i <= other._degree ; ++i) {
      new_poly._coefficients[i] = -1 * other._coefficients[i];
    }
  }
  return new_poly;
}
Polynomials Polynomials::subMine(Polynomials &other) {
  size = (_degree >= other._degree)? _degree : other._degree;
  Polynomials new_poly(size - 1);
  for (int i = 0; i <= (_degree <= other._degree)? _degree : other._degree ; ++i) {
    new_poly._coefficients[i] = other._coefficients[i] - _coefficients[i];
  }
  if(_degree >= other._degree){
    for (int i = other._degree; i <= _degree; ++i) {
      new_poly._coefficients[i] =  -1 *_coefficients[i];
    }
  } else{
    for (int i = _degree; i <= other._degree; ++i) {
      new_poly._coefficients[i] = other._coefficients[i];
    }
  }
  return new_poly;
}
Polynomials Polynomials::mult(Polynomials &other) {
 /* //դեռ չեմ վերջացրել
  size = (_degree + 1) + (other._degree + 1);
  Polynomials* new_poly(size);
  for (int i = 0; i <= _degree; ++i) {
    for (int j = 0; j <= other._degree; ++j) {
      new_poly._coefficients[i + j] = other._coefficients[j] * _coefficients[i];
    }
  }*/
  return new_poly;
}


void Polynomials::print()
{
  for ( int i = size; i >= 0; i-- ) {
    if ( _coefficients[i] != 0 ) {
      cout << _coefficients[i] << "x^" << i << "+";
    }
  }
}
