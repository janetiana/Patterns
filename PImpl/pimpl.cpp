#include "pimpl.h"
#include "impl.h"

PImpl::PImpl() :m_impl{new Impl{}}
{

}

PImpl::~PImpl()
{
    delete m_impl;
}

void PImpl::say()
{
    m_impl->say();
}
