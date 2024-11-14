#include <iostream>
using namespace std;

#include <iostream>
#include <iomanip>
#include <cmath>


//Class Definition
class Car {
   private:
      int modelYear;
      int purchasePrice;
      double currentValue;
   
   public:
      void SetModelYear(int userYear);
      int GetModelYear() const;
      void SetPurchasePrice(int userPrice);
      int GetPurchasePrice() const;
      void CalcCurrentValue(int currentYear);
      void PrintInfo() const;
};

//Class Implimentation
void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

void Car::SetPurchasePrice(int userPrice){
   purchasePrice = userPrice;
}

int Car::GetPurchasePrice() const {
   return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

void Car::PrintInfo() const {
   cout << "Car's information:" << endl;
   cout << "  Model year: " << modelYear << endl;
   cout << "  Purchase price: $" << purchasePrice << endl;
   cout << fixed << setprecision(0);
   cout << "  Current value: $" << currentValue << endl;
}

// Using the class
int main() {
   int userYear;
   int userPrice;
   int userCurrentYear;
   Car myCar;
      
   cin >> userYear;
   cin >> userPrice;
   cin >> userCurrentYear;
      
   myCar.SetModelYear(userYear);
   myCar.SetPurchasePrice(userPrice);
   myCar.CalcCurrentValue(userCurrentYear);
      
   myCar.PrintInfo();
   
   return 0;
}