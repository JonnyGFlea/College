#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    Car x;
    Car y("Audi", "A4", 8999.99);
    Car z(x);

    x.print();
    y.print();
    z.print();

    string b, m;
    double p;
    cout << "Enter brand: ";
    cin >> b;
    cin.get();
    cout << "Enter model: ";
    cin >> m;
    cout << "Enter price: ";
    cin >> p;

    x.setBrand(b);
    x.setModel(m);
    x.setPrice(p);

    cout << "Now the first instance is: " << endl;
    x.print();
    y.print();
    z.print();

    return 0;
}
