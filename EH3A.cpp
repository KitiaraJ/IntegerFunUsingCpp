/*
Kitiara See
HW# EH3
6/14/17
Part 1 Reads:
	Write a function that reverses an integer value. Test with numbers that are 
	1, 2, 3, 4, or 5 digits long.
*/

#include <iostream>
#include <iomanip>
using namespace std;


/*This function, while strong, can only handle integers up to 10 digits long. 
If it is more than ten digits long, the output looks like this:

	Please enter an integer that you would like to be reversed: 12345678912
	The number reversed is: 0


*/
int rev(int &a)
{
	int b = 0;
	int c = 0;

	while (a > 0)
	{
		c = a % 10;			//Using the mod function to get the rightmost digit
		b = (b * 10) + c;	//Storing the digit in reverse order
		a = a / 10;	        //getting rid of the right-most digit to resume 	                      
	}						//the program. Uses integer division to continue.

	a = b;					//Sets the return value equal to the reversed number

	return a;
}


int main()
{
	int n = 0;

	cout << "Please enter an integer that you would like to be reversed: ";
	cin >> n;					//User input integer to be reversed

	rev(n);						//Sends the integer through the function

	cout << "The number reversed is: ";
	cout << n << endl;			//Prints out the reversed number
	

	system("pause>nil");
	return 0;
}

/* The output looks like this:

	Please enter an integer that you would like to be reversed: 2
	The number reversed is: 2

	Please enter an integer that you would like to be reversed: 23
	The number reversed is: 32

	Please enter an integer that you would like to be reversed: 258
	The number reversed is: 852
	
	Please enter an integer that you would like to be reversed: 1234
	The number reversed is: 4321
	
	Please enter an integer that you would like to be reversed: 15368
	The number reversed is: 86351

	Please enter an integer that you would like to be reversed: 123456789
	The number reversed is: 987654321

*/
