#include "shape.h"
#include <QDebug>

Shape::Shape(int i, Shape *p):ins{i}, m_parent{p}{}

bool Shape::inscribe(int R)
{
    qDebug() << "Inscribe call in Shape for R = " << R << endl;
    return R < ins;
}

Shape *Shape::parent()
{
    return m_parent;
}
