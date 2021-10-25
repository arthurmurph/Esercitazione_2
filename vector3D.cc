#include "vector3D.h"
#include <iostream>
#include <cmath>
using namespace std;

vector3D::vector3D(){x_=0.,y_=0.,z_=0.;}

vector3D::vector3D(double x, double y, double z){
  x_=x,y_=y,z_=z;
}

vector3D::~vector3D(){};

void vector3D::set(double x, double y, double z){
  x_=x,y_=y,z_=z;
}

double vector3D::getx() const{
  return(x_);
}

double vector3D::gety() const{
  return(y_);
}

double vector3D::getz() const{
  return(z_);
}

double vector3D::r() const{
  return(sqrt(x_*x_+y_*y_+z_*z_));
}

double vector3D::theta() const{
  return(atan(sqrt((x_*x_+y_*y_)/(z_*z_))));
}

double vector3D::phi() const{
  return(atan(y_/x_));
}

double vector3D::sp(const vector3D& v1, const vector3D& v2) const{
  return(v1.x_*v2.x_+v1.y_*v2.y_+v1.z_*v2.z_);
}

double vector3D::angle(const vector3D& v1, const vector3D& v2) const{
  return(acos(vector3D::sp(v1,v2)/(sqrt(vector3D::sp(v1,v1)))*sqrt(vector3D::sp(v2,v2))));
}

vector3D vector3D::operator*(const vector3D& rhs) const{
  double x=(y_*rhs.z_-rhs.y_*z_);
  double y=(z_*rhs.x_-rhs.z_*x_);
  double z=(x_*rhs.y_-rhs.x_*y_);
  return(vector3D(x,y,z));
}

void vector3D::print() const{
    cout << "v=["<<x_<<","<<y_<<","<<z_<<"]"<< endl;
  }

ostream& operator<<(ostream& os, const vector3D& rhs){
  os << "v=["<<rhs.x_<<","<<rhs.y_<<","<<rhs.z_<<"]";
  return os;
};
