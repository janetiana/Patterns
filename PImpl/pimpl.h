#ifndef PIMPL_H
#define PIMPL_H

class Impl;

class PImpl
{
public:
    PImpl();
    ~PImpl();
    void say();
private:
    Impl* m_impl;
};

#endif // PIMPL_H
