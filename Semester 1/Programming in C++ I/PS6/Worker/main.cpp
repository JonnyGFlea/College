#include <iostream>
#include "Worker.h"

using namespace std;

int main(int argc, char** argv)
{
    Worker a(234, "John McEnroe");
    Worker b(324, "Jack Nicholson");

    cout << a << b;
    return 0;
}
