// Write a c++ prrogram to overload function volume and find volume of cube , sphere and cylinder.

#include<iostream>
using namespace std;
#define PI 3.14

class Volume 
{
  public:

  void volume(float side)
  {
    float vol = (side * side * side);
    cout << "volume of cube is: " << vol << endl;
  }
  
  void volume(float radius , float height)
  {
    float cyl,sph;
    cyl = PI * (radius * radius) * height ;
    cout << "volume of cylinder is: " << cyl << endl;

    sph = 4/3 *( PI * (radius * radius * radius));
    cout << "volume of sphere is: " << sph << endl;
  }

};

int main()
{
 Volume v;

 v.volume(5);
 v.volume(10,5);
  return 0;
}