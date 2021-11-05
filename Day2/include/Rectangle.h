#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    private:
    float height;
    float width;

    public:
       void setHeight(float h)
       {
            if(h>=0)
            height = h;
            else
            height=0;
       }
       void setWidth(float w)
       {
           if(w>=0)
           width = w;
           else
           width=0;
       }

       float getHeight()
       {
           return height;
       }

       float getWidth()
       {
          return width;
       }

       float calcArea()
       {
            return height * width;
       }
};

#endif // RECTANGLE_H
