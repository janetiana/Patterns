#ifndef CIRCLE_H
#define CIRCLE_H
#include "ellipse.h"

class Shape;

class Circle: public Ellipse
{
public:
    Circle(int r, Shape* p);
    bool inscribe(int R) override;
};

#endif // CIRCLE_H
