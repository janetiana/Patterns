#include <iostream>
#include "pimpl.h"

using namespace std;

int main()
{
    PImpl pi{};
    pi.say();
    cout << "Hello World!" << endl;
    return 0;
}
