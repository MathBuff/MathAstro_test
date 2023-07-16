#include "nodePositioner.h"

int nodePositioner::getX()
{
    return x;
}

int nodePositioner::getY()
{
    return y;
}

int nodePositioner::getLayer()
{
    return layer;
}

void nodePositioner::setX(int val)
{
    x = val;
}

void nodePositioner::setY(int val)
{
    y = val;
}

void nodePositioner::setLayer(int val)
{
    layer = val;
}
