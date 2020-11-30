#pragma once
#include "Point.h"
class Rectangle
{
public:
	Rectangle(const Point& leftTop, const Point& rightBottom)
		:leftTop(leftTop), rightBottom(rightBottom) //ctor copy
	{
		/*this->leftTop = leftTop;*/
	}
	Rectangle(int x1, int x2, int y1, int y2)
		:leftTop(x1, y1), rightBottom(x2, y2)
	{}
	Rectangle() = default;
	void print() const;
	int area() const;
private:
	Point leftTop, rightBottom{1,1};

};

inline  int Rectangle::area() const
{
	return abs(rightBottom.x - leftTop.x) * abs(rightBottom.y - leftTop.y);
}

inline void Rectangle::print() const
{
	std::cout << "________Rectangle_______\n";
	std::cout << "Left top ";
	leftTop.print();
	std::cout << "Right bottom ";
	rightBottom.print();
}