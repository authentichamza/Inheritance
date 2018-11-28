#include<iostream>
#include<string>
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
  return sqrt((x*x)+(y*y));
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
};
int main(){
  //ThreeD d(1,2,3);
  TwoD d1(1,2);
  TwoD d2(2,6);
  cout<<d1.getDistance();

return 0;
}
