#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void outputVector(const vector <int> &);
void inputVector(vector <int> &);

int main(void)
{
	vector < int > integers1 (7);
	vector <int> integers2(10);

	cout << "Size of vector integers1 is" << integers1.size()
	     << "\nvector after initialization : " << endl;
	outputVector(integers1);

	cout << "Size of vector integers2 is" << integers2.size()
	     << "\nvector after initialization : " << endl;
	outputVector(integers2);	

	cout << "\nEnter 17 integers : " << endl;
	inputVector( integers1);
	inputVector( integers2);

	cout << "\nAfter input, the vectors contain:\n"
	     << "integers1 : " << endl;
	outputVector(integers1);
	cout << "integers2 : " << endl;
	outputVector(integers2);

	if(integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	vector <int> integers3(integers1); // copy constructor

	cout << "size of vector integers3 is" << integers3.size()
	     << "\nvector after initialization\n" << endl;
	outputVector(integers3);

	integers1 = integers2;

	cout << "integers1" << endl;
	outputVector(integers1);

	cout << "integers2" << endl;
	outputVector(integers2);

	cout << "Assigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;

	cout << "integers1" << endl;
	outputVector(integers1);

	try{
		cout << integers1.at(15) << endl;
	}
	catch( out_of_range & ex)
	{
		cout << "an exception occured : " << ex.what() << endl;
	}

	return 0;
}

void outputVector(const vector <int> & array)
{
	size_t i;

	for(i = 0 ; i < array.size() ; ++i)
	{
		cout << setw(12) << array[i];

		if((i+1) % 4 == 0)
			cout << endl;
	}

	if(i%4 != 0)
		cout << endl;
}

void inputVector (vector <int> & array)
{
	for( size_t i = 0; i < array.size() ; ++i)
	{
		cin >> array[i];
	}
}

