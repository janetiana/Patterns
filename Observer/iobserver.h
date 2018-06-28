#ifndef IOBSERVER_H
#define IOBSERVER_H

class iObserver
{
public:
    virtual void message() = 0;
    virtual ~iObserver(){}
};

#endif // IOBSERVER_H
