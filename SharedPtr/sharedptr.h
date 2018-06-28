#ifndef SHAREDPTR_H
#define SHAREDPTR_H

template <class T>
class SharedPtr
{
private:
    T* m_ptr;
    int* count{0};
    void deletePtr()
    {
        (*count)--;
        if(!*count)
        {
            delete m_ptr;
        }
    }
public:
    SharedPtr(T* t) : m_ptr{t}, count{new int {1}} {}
    SharedPtr(SharedPtr& up) : m_ptr{up.m_ptr}, count{up.count}
    {
        (*count)++;
    }
    SharedPtr& operator=(SharedPtr& up)
    {
        if(this != &up || m_ptr != up.m_ptr)
        {
            deletePtr();
            m_ptr = up.m_ptr;
            count = up.count;
            (*count)++;
        }
        return *this;
    }
    ~SharedPtr()
    {
        deletePtr();
    }
    int getcount()
    {
        return *count;
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

#endif // SHAREDPTR_H
