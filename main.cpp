int main() {
    // Complexo c;

    // int *a;
    // a = (*int) malloc(4*sizeof(int)); // in c
    // a = new int[4]; // in cpp

    cout << "Digite o numero complexo: " << endl;
    float real, imag;
    cin >> real >> imag;
    //c.setReal(real);
    //c.setImag(imag);
    Complexo c1(real, imag);

    cout << c1.getReal() << " " << c1.getImag() << endl;

    cout <<" O modulo eh: " << c1.modulo() << endl;

    Complexo c2(1,1), c3, c4;
    c3 = c1.soma(c2);
    c4 = c1+c2;

    cout << "A soma do complexo com (1,1) eh: " <<c4.getReal() << " " << c4.getImag() << endl;
    cout << c3.getReal() << " " << c3.getImag() << endl;

    return 0;
}
