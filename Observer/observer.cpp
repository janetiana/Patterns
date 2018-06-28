#include "observer.h"
#include <iostream>

Observer::Observer()
{

}

void Observer::message()
{
    std::cout << "call for observer message\n";
}
