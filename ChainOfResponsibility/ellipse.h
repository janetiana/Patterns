#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse: public Shape
{
public:
    Ellipse(int a, int b, Shape *p);
    bool inscribe(int R) override;
private:
    int a;
    int b;
};

#endif // ELLIPSE_H
