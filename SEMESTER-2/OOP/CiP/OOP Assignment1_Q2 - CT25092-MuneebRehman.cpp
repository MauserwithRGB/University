//OOP assignment, task2: finding power of two using bitwise AND

#include <iostream>

using namespace std;

bool isPowerOfTwo(int num)
{
	if (num > 0)
	{
		return ((num & (num - 1)) == 0); // Learned: if i dont wrap the '&" operator in parenthesis, the logic breaks beacause the compiler works from the right to left due to higher operator precendence of '=='
	}                                    // the way this works is that if a number is a power of two, it will have only ONE bit set to 1 (all else is 0). So, if we do 'number AND (number - 1)' it will always be equal 0 if the number is a power of two. So if it equals 0, the boolean returns 1 and we get what we wanted efficiently
	
	return false;
}

int main()
{
	cout << boolalpha; // just a prefernce, prints out true/false instead of 1s and 0s
	
	cout << isPowerOfTwo(16) << "\n" <<
		isPowerOfTwo(12) << "\n" <<
		isPowerOfTwo(13) << "\n" <<
		isPowerOfTwo(2);
	
}