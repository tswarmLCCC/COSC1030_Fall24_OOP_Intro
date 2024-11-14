#include <iostream>
#include <iomanip>
using namespace std;

class Calculator {   
   public:
      Calculator();
      void Addition(double val);
      void Subtraction(double val);
      void Multiplication(double val);
      void Division(double val);
      void Clear( );
      double GetValue( );
   
   private: 
      double calcValue;
};


Calculator::Calculator() {
	Clear();
}

void Calculator::Addition(double val) { 
	calcValue += val; 
}

void Calculator::Subtraction(double val) { 
	calcValue -= val; 
}

void Calculator::Multiplication(double val) { 
	calcValue *= val; 
}

void Calculator::Division(double val) { 
	calcValue /= val; 
}

void Calculator::Clear() { 
	calcValue = 0.0; 
}

double Calculator::GetValue() { 
	return calcValue; 
}

int main() {
   Calculator calc;
	double num1;
	double num2; 
	
	cin >> num1;
	cin >> num2;
	
	cout << fixed << setprecision(1);
	// 1. The initial value
	cout << calc.GetValue() << endl;
		
	// 2. The value after adding num1
	calc.Addition(num1);
	cout << calc.GetValue() << endl;
		
	// 3. The value after multiplying by 3
	calc.Multiplication(3);
	cout << calc.GetValue() << endl;
		
	// 4. The value after subtracting num2
	calc.Subtraction(num2);
	cout << calc.GetValue() << endl;
		
	// 5. The value after dividing by 2
	calc.Division(2);
	cout << calc.GetValue() << endl;
		
	// 6. The value after calling the clear() method
	calc.Clear();
	cout << calc.GetValue() << endl;

   return 0;
}