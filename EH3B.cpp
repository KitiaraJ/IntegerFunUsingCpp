/* 
    Kitiara See
    6/9/17
    HW#3 EH2
    Program 12
Part 2 reads:
		Write a function multiple that determines for a pair of integers 
		whether the second is a multiple of the first. The function should 
		take two integer arguments and return true if the second is a multiple
		of the first, false otherwise. Test the function out with several 
		input values.
*/

#include <iostream>
#include <string>
using namespace std;

string mult (int &f, int &s, string r = "") 
{

    if (f % s == 0)     // if the modulus = 0 then the integers are multiples 
    {                   // of each other
        r = "true";
    }
    
    else
    {
        r = "false";
    }

	return r;           // returns the string "true" or "false"
}

int main()
{
	string r = "";
    int    f =  0;
    int    s =  0;
    
	cout << "Please input your first integer: ";   // prompt for 1st integer
    cin >> f;
    
    cout << "Please input your second integer: ";  // prompt for 2nd integer
    cin >> s;

	r = mult (f,s);                                // calls the function

    cout << "Is the second integer a multiple of the first?" << endl;
    cout << "The answer is: " << r << endl;       // prints the result
	
	system("pause>nil");
	return 0;

}

/* 
The output looks like this:
	Please input your first integer: 25
	Please input your second integer: 4
	Is the second integer a multiple of the first?
	The answer is: false

	Please input your first integer: 30
	Please input your second integer: 5
	Is the second integer a multiple of the first?
	The answer is: true
*/

