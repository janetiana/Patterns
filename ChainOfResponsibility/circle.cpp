#include "circle.h"
#include <QDebug>

Circle::Circle(int r, Shape *p):Ellipse{r, r, p}
{

}

bool Circle::inscribe(int R)
{
    qDebug() << "Inscribe call in Circle for R = " << R << endl;
    if(parent())
    {
        return parent()->inscribe(R);
    }
    qDebug() << "No parent found for Circle\n";
    return false;
}
