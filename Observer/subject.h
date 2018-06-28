#ifndef SUBJECT_H
#define SUBJECT_H
#include "isubject.h"

class iObserver;

class Subject: public iSubject
{
public:
    Subject();
    int add(int a, int b);
    virtual void set_observer(iObserver* iO);
private:
    iObserver* m_O{nullptr};
};

#endif // SUBJECT_H
