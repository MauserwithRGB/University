// OOP assignment, task4: Sum of a dynamic array
#include <iostream>

using namespace std;

int main()
{
	int size;
	cout << "How many elements would you like in the array? ";
	cin >> size;
	
	int* array = new int[size];
	
	int sum = 0;
	cout << "\nEnter the elements of the array: ";
	
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
		sum += array[i]; 
	}
	
	cout << "\nThe sum is " << sum;
	
	delete[] array;
}