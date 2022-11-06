#include <iostream>

#include "hello.h"
#include "../include/unit.h"

using namespace std;

int main() {
    cout << "Hello, world!" << endl;

    Hello hello("John");
    cout << hello.Say("Hi") << endl;

    double v;
    cout << "Input a number: ";
    cin >> v;

    cout << v << " * 2 = " << Twice(v) << endl;
    cout << v << " / 2 = " << Half(v) << endl;

#ifdef FLAG1
    cout << "Flag 1" << endl;
#endif

#ifdef FLAG2
    cout << "Flag 2" << endl;
#endif
}
