#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(void)
{
	Complex cmplx(1234.432859,5678.54378);
	string x = cmplx.getNumber();
	cout << " complx number : " << x << endl;
	return 0;
}
