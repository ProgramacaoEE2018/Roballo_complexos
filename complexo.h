#include <iostream>
#include <cmath>

using namespace std;

class Complexo {
private:
    float real, imag;
public:
    Complexo(float _real = 0.0, float _imag = 0.0) : real(_real), imag(_imag) {}
    ~Complexo() {}

    float getReal() { return real; }
    float getImag() { return imag; }
    void setReal(float _real) { this->real = _real; }
    void setImag(float _imag) { this->imag = _imag; }

    float modulo();
    Complexo soma(Complexo);
    Complexo dif(Complexo);
    Complexo mult(Complexo);
    Complexo div(Complexo);
    Complexo conjugado (Complexo);

    Complexo & operator + (const Complexo& c) {
        this->real += c.real;
        this->imag += c.imag;
        return *this;
    }

};
