#include <iostream>
using namespace std;

class calculator
{
	private:
		float result;
		float input1, input2;
		
	public:
		calculator()
		{
			result = 0;
			input1 = 0, input2 = 0;
		}
		
		void add()
		{
			cout << "Enter two numbers for addition: ";
			cin >> input1 >> input2;
			
			result = input1 + input2;
			
			cout << "The result is " << result << endl;
		}
		
		void subtract()
		{
			cout << "\nEnter two numbers for subtraction: ";
			cin >> input1 >> input2;
			
			result = input1 - input2;
			
			cout << "The result is " << result << endl;
		}
		
		void multiply()
		{
			cout << "\nEnter two numbers for multiplication";
			cin >> input1 >> input2;
			
			result = input1 * input2;
			
			cout << "The result is " << result << endl;
		}
		
		void divide()
		{
			cout << "\nEnter two numbers for division: ";
			cin >> input1 >> input2;
			
			result = input1 / input2;
			
			cout << "The result is " << result << endl;
		}
		
		void modulus()
		{
			cout << "\nEnter two numbers for modulus: ";
			cin >> input1 >> input2;
			
			result = input1 % input2;
			
			cout << "The result is " << result << endl;
		}
};

int main(void)
{
	calculator calc;
	
	calc.add();
	calc.subtract();
	calc.multiply();		
	calc.divide();
	
}