#include <iostream>

using namespace std;

class Quadrado{  
   public:
    double lado;
    string nome;

   Quadrado() {
      lado = 1.0;
      nome = "q1";
   }
   
   Quadrado(double l) {
      lado = l;
      nome = "q1";
   }
   
   double getLado() {
     return lado;
   }
   
   double getArea() {
      return lado*lado;
   }
};
