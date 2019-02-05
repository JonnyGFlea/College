#ifndef _CAR_H
#define _CAR_H

#include <iostream>

class Car {
    private:
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

inline void Car::setBrand(const std::string newbr) {
    brandname = newbr;
}

inline void Car::setModel(const std::string newmd) {
    model = newmd;
}

inline void Car::setPrice(const double newpr) {
    price = newpr;
}

inline std::string Car::getBrand() const {
    return brandname;
}

inline std::string Car::getModel() const {
    return model;
}

inline double Car::getPrice() const {
    return price;
}

#endif
