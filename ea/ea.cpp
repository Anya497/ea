#include <iostream>
#include <math.h>
#include <string>


void c(int x1, int y1, int x0, int y0) {
	float x_c, y_c;
	x_c = (y1 - y0) + x0, y_c = -(x1 - x0) + y0;
	std::cout << "point c: (";
	std::cout << x_c;
	std::cout << " ";
	std::cout << y_c;
	std::cout << ")" << std::endl;
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