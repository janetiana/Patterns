#include <iostream>
#include "uniqueptr.h"

using namespace std;

int main()
{
    UniquePtr<int> integer {new int{5}};
    cout << "1Hello " << *integer.get() << endl;
    UniquePtr<int> integer1 {integer};
    if(!integer)
    {
        cout << "no iteger" << endl;
    }
    cout << "2Hello " << *integer1.get() << endl;
    integer = integer1;
    if(!integer1)
    {
        cout << "no iteger1" << endl;
    }
    cout << "2Hello " << *integer.get() << endl;

    return 0;
}
