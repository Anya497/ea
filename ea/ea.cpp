#include <iostream>
#include <math.h>
#include <string>

int c(int x1, int y1, int x0, int y0)
{
	double fi;
	if (x1 != x0) {
		fi = atan((y1 - y0) / (x1 - x0));
	}
	if (x1 == x0 and y0 <= y1) {
		fi = atan(1.0) * 2;
	}
	if (x1 == x0 and y0 > y1) {
		fi = -atan(1.0) * 2;
	}
	double x_c, y_c;
	double r = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));
	if (x1 < x0) {
		x_c = r * cos(fi - atan(1.0) * 6) + x0, y_c = r * sin(fi - atan(1.0) * 6) + y0;
	}
	else {
		x_c = r * cos(fi - atan(1.0) * 2) + x0, y_c = r * sin(fi - atan(1.0) * 2) + y0;
	}
	
	std::cout << "point c: (";
	std::cout << x_c;
	std::cout << " ";
	std::cout << y_c;
	std::cout << ")" << std::endl;
	return 0;
}


int main()
{
	int N;
	std::cout << "N = ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		std::cout << "point a" << std::endl;
		int x1, y1;
		std::cin >> x1;
		std::cin >> y1;
		std::cout << "point b" << std::endl;
		int x0, y0;
		std::cin >> x0;
		std::cin >> y0;
		c(x1, y1, x0, y0);
	}
}