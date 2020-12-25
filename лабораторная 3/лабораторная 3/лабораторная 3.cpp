#include <cstdlib>
#include <iostream>
#include <math.h>
#define A 0.1
#define B 0.8
#define E 10e-4
int main(int argc, char* argv[])
{
	double x, k = (B - A) / 10.0, sn = 0, se = 0, t, y;
	int i, j, n = 10;
	for (x = A; x <= B; x += k) {
		sn = x; se = x;
		for (i = 1; i <= n; i++) {
			sn += pow(-1, i + 1) * pow(x, 2 * i) / pow(-1, i + 1) * (2 * i * (2 * i - 1));
		};


		j = 1;
		do
		{
			t = pow(-1, j + 1) * pow(x, 2 * j) / pow(-1, j + 1) * (2 * j * (2 * j - 1));
			j++; se += t;
		} while (t > E);
		y = -log((sqrt(1.0) + pow(x, 2)) + x * atan(x));
		printf("x=%.2f SN=%f SE=%f Y=%f\n", x, sn, se, y);
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
