#ifndef UNIQUEPTR_H
#define UNIQUEPTR_H

template <class T>
class UniquePtr
{
private:
    T* m_ptr;
public:
    UniquePtr(T* t) : m_ptr{t} {}
    UniquePtr(UniquePtr& up) : m_ptr{up.m_ptr}
    {
        up.m_ptr = nullptr;
    }
    UniquePtr& operator=(UniquePtr& up)
    {
        if(this != &up)
        {
            delete m_ptr;
            m_ptr = up.m_ptr;
            up.m_ptr = nullptr;
        }
        return *this;
    }
    ~UniquePtr()
    {
        delete m_ptr;
    }
    T* get()
    {
        return m_ptr;
    }
    explicit operator bool()
    {
        return m_ptr != nullptr;
    }
};

#endif // UNIQUEPTR_H
