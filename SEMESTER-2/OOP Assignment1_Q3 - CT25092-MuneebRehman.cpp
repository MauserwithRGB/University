// OOP assignment, task 3: Swapping variables using references

#include <iostream>

using namespace std;

void XORswap(int &a, int &b)  // this is a neat little trick for XOR. ONE CAVEAT though, this wont work for floats or doubles. but the question asks only for ints, sooooo..... 
{                             // this can also be used as an encryption method, like a = a ^ b ^ b where XORing once encrypts and XORing twice decrypts. will inshaAllah make a separate program for that...
	a = a ^ b; // XOR of 'a' and 'b', which yields a new number which then overwrites the original value of 'a'
	b = a ^ b; // XOR of the new 'a', and 'b', which yields the orginal value of 'a' which is then stored into 'b'. This makes 'b' the new 'a'
	a = a ^ b; // the final XOR yields the originl value of 'b', which is now stored into 'a', completing the swap
    // sorry couldnt phrase it better
    
	cout << "\nVariables swapped!\na = " << a << "\nb = " << b;
	 
}

int main()
{
	int a, b;
	
	cout << "Enter (integer) value for 'a' : ";
	cin >> a;
	
	cout << "Enter (integer) value for 'b' : ";
	cin >> b;
	
	XORswap(a, b);
}