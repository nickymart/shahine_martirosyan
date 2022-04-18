#ifndef POLYNOMIALS_H
#define POLYNOMIALS_H

class Polynomials{

  private:
    int    _degree;
    double* _coefficients;
  public:
    Polynomials();
    Polynomials(int);
    Polynomials(const double* coefficients , int count);
    Polynomials( const Polynomials&);
    ~Polynomials();

    int degree() const;
    Polynomials add(Polynomials& );
    Polynomials subFromMy(Polynomials& );
    Polynomials subMine(Polynomials& );
        Polynomials mult(Polynomials& );
    void print();


};
#endif
