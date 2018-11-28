#include<iostream>
#include<string>
#include <math.h>
#include <vector>
using namespace std;
class TwoD // base class
{
protected:
double x, y; // x and y  coordinates
public:
TwoD(double i, double j)
{
x=i;
y=j;
}
void setX(double NewX){x = NewX;}
void setY(double NewY){y = NewY;}
double getX() const {return x;}
double getY() const {return y;}
double getDistance(const TwoD& point)const{
      double X, Y;

      X = point.getX() - x;
      Y = point.getY() - y;
      int a = sqrt((X* X)+(Y*Y));
      return a;

  }
};
class ThreeD : public TwoD
{
protected:
double z; // x, y, z oordinates
public:
ThreeD(double i, double j, double k):TwoD(i,j),z(k){}
void setZ(double NewZ){z = NewZ;}
double getZ() const {return z;}
double getDistance(const ThreeD& point)const;
};
double ThreeD::getDistance(const ThreeD& point) const
{
    double X,Y,Z;
    X= point.getX() - x;
    Y= point.getY() - y;
    Z=point.getZ() - z;
    double distance = sqrt((X * X) + (Y * Y) + (Z * Z));
    return distance;
}

int main(){
  ThreeD d3(1,2,3);
  ThreeD d4(4,5,6);
  TwoD d1(1,2);
  TwoD d2(2,4);
  cout<<d3.getDistance(d4)<<endl;
  cout <<d4.getDistance(d3)<< endl;

return 0;
}
