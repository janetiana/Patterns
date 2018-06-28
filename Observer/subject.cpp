#include "subject.h"
#include "observer.h"

Subject::Subject()
{

}

int Subject::add(int a, int b)
{
    if(m_O)
    {
        m_O->message();
    }
    return a+b;
}

void Subject::set_observer(iObserver *iO)
{
    m_O = iO;
}
