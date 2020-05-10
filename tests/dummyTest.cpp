#include <gtest/gtest.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

TEST(DummySuite, DummyTest)
{
	struct Vec2f
	{
		float x;
		float y;
	};

	struct Circle
	{
		Vec2f pos;
		float radius;
	};

	const Vec2f pos{0.0f,0.0f};
	const float radius = 1.0f;
	const Circle c{pos, radius};

	std::cout << "Area of circle c with a position of {" << pos.x << ";" << pos.y << "} and radius of " << radius << " is: " << M_PI * radius * radius << '\n';
}
