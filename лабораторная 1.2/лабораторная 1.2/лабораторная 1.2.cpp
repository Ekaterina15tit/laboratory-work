#include <iostream>
using namespace std;

void main()
{
	int n = 2, m = 1, b;

	b = n++ * m;
	cout << b << endl;

	b = n++ < m;
	cout << b << endl;

	b = n-- > m;
	cout << b << endl;
}
