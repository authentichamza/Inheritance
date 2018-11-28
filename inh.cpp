#include<iostream>
#include<string>
#include <vector>
using namespace std;
class Shape{
public:
  virtual double getArea(){

  }
  virtual double getParameter(){

  }
};
class Rectangle:public Shape{
private:
  double width;
  double length;
public:
  Rectangle();
  Rectangle(double wid,double leng){
    width=wid;
    length=leng;
  }
  double getArea(){
    return (width*length);
  }
  double getParameter(){
    return ((2*width)+(2*length));
  }
};
class Circle:public Shape{
private:
  double radius;
public:
  Circle();
  Circle(double r){
  radius=r;
  }
  double getArea(){
    return(3.142*(radius*radius));
  }
  double getParameter(){
    return (2*3.142*radius);
  }
};
int main(){
  Shape* sptr;
  Circle c2(30);
  sptr=&c2;
  cout<<sptr->getArea()<<endl;
  cout<<sptr->getParameter()<<endl;

  return 0;
}
