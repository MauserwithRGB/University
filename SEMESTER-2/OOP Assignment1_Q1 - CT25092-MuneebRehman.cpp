//OOP Assignment, Task 1: Function Overloading and default arguments

#include <iostream>
#include <string>

using namespace std;

void greet(string name = "Muneeb") // this is the important part; the default value prints only if no input is given. AND the default value does not change the signature of the function, thats why some code below is commented out; it gives a compile time error.
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