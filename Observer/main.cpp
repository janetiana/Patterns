#include <iostream>
#include "subject.h"
#include "observer.h"

using namespace std;

int main()
{
    Subject sub1;
    Subject sub2;
    Observer obs;
    sub2.set_observer(&obs);
    cout << sub1.add(2,3) << " || " << sub2.add(3,2) << endl;
    return 0;
}
