#include "ellipse.h"
#include <QDebug>

Ellipse::Ellipse(int a, int b, Shape* p)
    :Shape{a>b? b : a, p}
    , a{a}
    , b{b}
{}

bool Ellipse::inscribe(int R)
{
    qDebug() << "Inscribe call in Ellipse for R = " << R << endl;
    if(parent())
    {
        return parent()->inscribe(R);
    }
    qDebug() << "No parent found for Ellipse\n";
   return R < a && R < b;
}
