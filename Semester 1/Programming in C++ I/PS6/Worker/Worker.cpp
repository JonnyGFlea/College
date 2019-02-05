#include <iostream>
#include "Worker.h"

using namespace std;

Worker::Worker(int newn, const string newname) {
    number = newn;
    name = newname;
}

ostream& operator << (ostream& out, const Worker& x) {
    out << "Worker's name: " << x.name << ";\nWorker's number: " << x.number << ".\n" << endl;
    return out;
}
