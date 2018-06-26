#include "singletone.h"
#include <iostream>

SingleTone::SingleTone()
{

}

SingleTone::~SingleTone()
{

}

SingleTone &SingleTone::instance()
{
    static SingleTone st;
    return st;
}

void SingleTone::say()
{
    using namespace std;
    cout << "Call for SingleTone say\n";
}
