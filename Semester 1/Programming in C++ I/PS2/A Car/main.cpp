#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    Taxi x;
    Taxi y("Audi", "A4", 8999.99, 3);
    Taxi z(x);

    x.print();
    y.print();
    z.print();

    string b, m;
    double p;
    int l;
    cout << "Enter brand: ";
    cin >> b;
    cin.get();
    cout << "Enter model: ";
    cin >> m;
    cout << "Enter price: ";
    cin >> p;
    cout << "Passengers limit: ";
    cin >> l;

    x.setBrand(b);
    x.setModel(m);
    x.setPrice(p);
    x.setPassLimit(l);

    cout << "Now the first instance is: " << endl;
    x.print();
    y.print();
    z.print();

    return 0;
}
