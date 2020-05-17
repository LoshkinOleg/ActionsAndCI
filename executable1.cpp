#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	const float radius = 5;
	const float area = M_PI * std::powf(radius, 2);
	std::cout << "Area is: " << area << '\n';
	return 0;
}
	