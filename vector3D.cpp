#include <iostream>
#include "vector3D.h"
#include <cmath>

using namespace std;

void print(const std::string& word){
  cout << word << endl;
}

int main(int argc, char **argv){
  
  double x1, y1, z1; // primo vettore
  double x2=0, y2=1, z2=0; // secondo vettore

  if(argc!=4){
    print("Dare in input x, y e z.");
    return(-1);
  }

  x1=atof(argv[1]);
  y1=atof(argv[2]);
  z1=atof(argv[3]);
  
  vector3D v1(x1,y1,z1);
  vector3D v2(x2,y2,z2);

  vector3D *p=&v1;

  p->print();

  print("Prodotto scalare");
  cout << "s=" << p->sp(v1,v2) << endl;

  print("Angolo tra due vettori");
  cout << "alpha=" << (p->angle(v1,v2))*180/M_PI << endl; 

  print("Prodotto vettoriale");
  vector3D v3= v1*v2;
  cout << v3 << endl;
  
  return(0);
}
