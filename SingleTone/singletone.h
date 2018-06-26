#ifndef SINGLETONE_H
#define SINGLETONE_H


class SingleTone
{
private:
    SingleTone();
    SingleTone(const SingleTone&) = delete;
    SingleTone& operator= (const SingleTone&) = delete;
    ~SingleTone();
public:
    static SingleTone& instance();
    void say();
};

#endif // SINGLETONE_H
