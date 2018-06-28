#ifndef ISUBJECT_H
#define ISUBJECT_H

class iObserver;

class iSubject
{
public:
    virtual void set_observer(iObserver* iO) = 0;
    virtual ~iSubject(){}
};

#endif // ISUBJECT_H
