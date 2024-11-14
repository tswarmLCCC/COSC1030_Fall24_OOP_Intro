#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;
      
   double userBase, userHeight;
      
   // Read and set base and height for triangle1 (use SetBase() and SetHeight())
   cin >> userBase;
   cin >> userHeight;
   triangle1.SetBase(userBase);
   triangle1.SetHeight(userHeight);

   // Read and set base and height for triangle2 (use SetBase() and SetHeight())
   cin >> userBase;
   cin >> userHeight;
   triangle2.SetBase(userBase);
   triangle2.SetHeight(userHeight);

   cout << "Triangle with smaller area:" << endl;
   
   // TODO: Determine smaller triangle (use GetArea())  
   //       and output smaller triangle's info (use PrintInfo())
   if (triangle1.GetArea() < triangle2.GetArea()) {
      triangle1.PrintInfo();
   }
   else {
      triangle2.PrintInfo();
   }
   
   return 0;
}