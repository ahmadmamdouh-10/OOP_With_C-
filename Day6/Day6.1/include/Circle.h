#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
     float Radius;

public:

    void setRadius(float r)
    {
        Radius = r;
    }

    float getRadius()
    {
        return Radius;
    }

    float CalcArea()
    {
        return Radius*Radius*3.14;
    }

};











#endif // CIRCLE_H
