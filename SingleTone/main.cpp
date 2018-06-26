#include <iostream>
#include "singletone.h"

using namespace std;

int main()
{
    SingleTone::instance().say();
    cout << "Hello World!" << endl;
    return 0;
}
