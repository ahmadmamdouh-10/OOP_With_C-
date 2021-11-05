#ifndef SQUARE_H
#define SQUARE_H


class Square
{
    private:
      float height;

    public:
        void setHeight(float h)
        {
          if(h>=0)
          height = h;
          else
              height = 0;
        }

        float getHeight()
        {
            return height;
        }

        float getArea()
        {
           return height * height;
        }


};

#endif // SQUARE_H
