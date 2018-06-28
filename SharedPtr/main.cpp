#include <iostream>
#include "sharedptr.h"

using namespace std;

int main()
{
    SharedPtr<int> integer {new int{5}};
    SharedPtr<int> integer10 {new int{10}};
    cout << "1Hello " << *integer.get() << "||" << integer.getcount() << endl;
    {
        SharedPtr<int> integer1 {integer};
        if(!integer)
        {
            cout << "no iteger" << endl;
        }
        cout << "2Hello " << *integer1.get() << " " << *integer.get() << "||" << integer.getcount() << endl;
        integer = integer1;
        if(!integer1)
        {
            cout << "no iteger1" << endl;
        }
        cout << "3Hello " << *integer.get() << " " << *integer1.get() << "||" << integer.getcount() << endl;
        (*integer.get()) = {25};
        cout << "4Hello " << *integer.get() << " " << *integer1.get() << "||" << integer.getcount() << endl;
    }
    cout << "5Hello " << *integer.get() << "||" << integer.getcount() << endl;

    return 0;
}
