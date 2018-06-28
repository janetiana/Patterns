#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
    Shape(int i, Shape* p);
    virtual bool inscribe(int R);
    Shape* parent();
private:
    int ins;
    Shape* m_parent;
};

#endif // SHAPE_H
