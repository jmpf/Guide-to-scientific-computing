class Point2d
{
public:
   int x, y;
   Point2d(int a, int b)
   {
      x = a;
      y = b;
   }
   bool operator<(const Point2d& other) const
   {
      if (x < other.x)
      {
         return true;
      }
      else if (x > other.x)
      {
         return false;
      }
      else if (y < other.y)
      {
         // x == other.x
         return true;
      }
      else
      {
         // x == other.x and
         // y >= other.y
         return false;
      }
   }
};
//Code from Chapter08.tex line 240 save as Point2d.hpp
