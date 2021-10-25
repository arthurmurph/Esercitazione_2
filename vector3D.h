#ifndef vector3D_h
#define vector3D_h
#include <iostream>
using namespace std;

class vector3D{
 public:
  //costruttori
  vector3D();
  vector3D(double x , double y, double z);
  ~vector3D();

  //setters
  void set(double x, double y, double z);

  //getters
  double getx() const;
  double gety() const;
  double getz() const;

  //funzioni varie
  double r() const;
  double theta() const;
  double phi() const;

  //prodotto scalare

  double sp(const vector3D& v1, const vector3D& v2) const;

  //prodotto vettoriale

  vector3D operator*(const vector3D& rhs) const;

  //angolo tra due vettori
  double angle(const vector3D& v1, const vector3D& v2) const;
  
  //funzione stampa
  void print() const;

  //stampa di una classe
  friend ostream& operator<<(ostream& os, const vector3D& rhs);
    
 private:
  double x_;
  double y_;
  double z_;
};

#endif
