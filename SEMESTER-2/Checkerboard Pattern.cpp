// this was a question in the deitel C++ book

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 8; i++)
	{
		if (i % 2 == 0)
			cout << " ";
			
		for (int j = 0; j < 8; j++)
		{
			cout << "* ";
		}
		
		cout << "\n";
	}
}
