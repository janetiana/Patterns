#ifndef OBSERVER_H
#define OBSERVER_H
#include "iobserver.h"

class Observer: public iObserver
{
public:
    Observer();
    virtual void message();
};

#endif // OBSERVER_H
