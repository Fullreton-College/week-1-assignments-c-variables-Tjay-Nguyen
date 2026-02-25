#include <iostream>

using namespace std;

int main()
{
	
	// print name of program
	cout << "Rectangle Calculator" << endl << endl;

	// get height and width from user
	double height;
	double width;
	cout << "Enter height and width: ";
/* write your code here */
	// calculate area
	cin >> height >> width;
	double area = height * width;

	// write output to console
	cout << "The area is: " << area << endl;

	// return value that indicates normal program exit
	// done with this
    return 0;
}

