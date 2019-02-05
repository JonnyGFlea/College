#ifndef _CAR_H
#define _CAR_H

#include <iostream>

class Car {
protected:
    std::string brandname;
    std::string model;
    double price;
    
public:
    Car() {
        brandname = "NO INPUT";
        model = "NO INPUT";
        price = 0;
    }
    Car(const Car& x) {
        brandname = x.brandname;
        model = x.model;
        price = x.price;
    }
    Car(const std::string br, const std::string md, const double pr) {
        brandname = br;
        model = md;
        price = pr;
    }
    ~Car() {};
    //setter
    void setBrand(const std::string);
    void setModel(const std::string);
    void setPrice(const double);
    //getters
    std::string getBrand() const;
    std::string getModel() const;
    double getPrice() const;
    //service methods
    void print() const {
        std::cout << "The Brand is " << brandname << ". \nThe Model is "
        << model << ". Price = $" << price << ".\n" << std::endl;
    }
};

class Taxi : public Car {
    private:
        int passLimit;

    public:
        Taxi();
        Taxi(const Taxi&);
        Taxi(const std::string, const std::string, const double, const int);
        ~Taxi();
        //setters
        void setPassLimit(const int);
        //getters
        int getPassLimit() const;
        //service methods
        void print() const;
};

inline void Car::setBrand(const std::string newbr) {
    brandname = newbr;
}

inline void Car::setModel(const std::string newmd) {
    model = newmd;
}

inline void Car::setPrice(const double newpr) {
    price = newpr;
}

inline std::string Car::getBrand() const{
    return brandname;
}

inline std::string Car::getModel() const{
    return model;
}

inline double Car::getPrice() const {
    return price;
}

inline Taxi::Taxi() : Car() {
    passLimit = 0;
}

inline Taxi::Taxi(const Taxi& x) : Car(x) {
    passLimit = x.passLimit;
}

inline Taxi::Taxi(std::string nbr, std::string nmd, double npr, int nlim)
                : Car(nbr, nmd, npr) {
    passLimit = nlim;
}

inline Taxi::~Taxi() {}

inline void Taxi::setPassLimit(const int nlim) {
    passLimit = nlim;
}

inline int Taxi::getPassLimit() const {
    return passLimit;
}
inline void Taxi::print() const {
    std::cout << "The Brand is " << brandname << ". \nThe Model is "
         << model << ". Price = $" << price << ".\n"
         << "The limit of passengers is " << passLimit << ".\n" << std::endl;
}
#endif
