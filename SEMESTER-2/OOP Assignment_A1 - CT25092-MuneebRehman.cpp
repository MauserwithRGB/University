// Task 1: Function Overloading

#include <iostream>
#include <string>

using namespace std;

void greet(string name = "Muneeb")
{
	cout << "Peace be upon you, " << name << "!\n";
}

void greet(string name, string greeting)
{
	cout << "" << greeting << " " << name << "!\n";
}

//void greet(string name = "Muneeb")
//{
//	cout << "Peace be upon you, " << name << "!\n";
//}

int main()
{
	greet();
	greet("Ahmed");
	greet("Ali", "Salam");
}