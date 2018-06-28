#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    Shape sh(25, nullptr);
    Ellipse e1 (20, 25, &sh);
    Ellipse e2 (10, 5, &sh);
    Ellipse e3 (10, 5, nullptr);
    Circle c1 (100, &sh);
    Circle c2 (200, nullptr);
    cout << sh.inscribe(21) <<
            " || " << e1.inscribe(22) <<
            " || " << e2.inscribe(23) <<
            " || " << e3.inscribe(24) <<
            " || " << c1.inscribe(25) <<
            " || " << c2.inscribe(26) << endl;
    return 0;
}
