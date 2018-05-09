
Complexo Complexo::soma(Complexo c) {
    this->real += c.real;
    this->imag += c.imag;
    return *this;
}

Complexo Complexo::dif(Complexo c) {
    this->real -= c.real;
    this->imag -= c.imag;
    return *this;
}

Complexo Complexo::mult(Complexo c) {
    this->real = this->real*c.real - this->imag*c.imag;
    this->imag = this->real*c.imag + this->imag*c.real;
    return *this;
}

Complexo Complexo::div(Complexo c) {
    this->real = (this->real*c.real + this->imag*c.imag)/(c.real*c.real + c.imag*c.imag);
    this->real = (this->imag*c.real - this->real*c.imag)/(c.real*c.real + c.imag*c.imag);
    return *this;
}

Complexo Complexo :: conjugado (Complexo c){
    this->real = this->real*c.real;
    this->imag = - this->real*c.imag;
    return *this;
}
