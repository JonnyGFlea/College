class Complex {
private:
    float real; // real part
    float imag; // imaginary part
public:
    Complex();
    Complex(float, float = 0);
    double magnitude();
    
    friend std::ostream& operator<< (std::ostream&, const Complex&);
    
    bool operator<(const Complex&);
    bool operator>(const Complex&);
    
    // void print();
};

// cpp file

std::ostream& operator<< (std::ostream& out, const Complex& p) {
    if (imag)
        out << std::noshowpos << real << std::showpos << imag << "i" << std::endl;
    else
        out << std::noshowpos << real << std::endl;
    return out;
}

bool Complex::operator<(const Complex& c) {
    if(magnitude() < c.magnitude())
        return true;
    else
        return false;
}

bool Complex::operator>(const Complex&) {
    if(magnitude() > c.magnitude())
        return true;
    else
        return false;
}
