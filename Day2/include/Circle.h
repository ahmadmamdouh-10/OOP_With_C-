#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
     float Radius;
     const float PI=3.14;

public:

    void setRadius(float r)
    {
        Radius = r;
    }

    float getRadius()
    {
        return Radius;
    }

    float calcArea()
    {
        return Radius*Radius*PI;
    }

};











#endif // CIRCLE_H





