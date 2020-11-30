#pragma once
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
class Point
{
public:
	explicit Point(int x=0, int y=0)
		:x(x), y(y) //список ініціалізації 
	{}
	void print() const;
	
private:
	int x, y;
	friend double calcDistance(const Point& p1, const Point& p2);
	friend class Rectangle;
	friend Point operator + (const Point& one, const Point& two);
	friend Point operator *(const Point& point, const int mult);
	friend std::ostream& operator << (std::ostream& out, const Point& point);
	friend std::istream& operator >>(std::istream& in,  Point& point);
};

inline  void Point::print() const {
	cout << "(" << x << ";" << y << ")" << endl;
}
// 1) global function
inline  double calcDistance(const Point& p1, const Point& p2)
{
	return sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
}
// 2) whole other class
// 3) some method of other class

inline  Point operator + (const Point& one, const Point& two)
{
	return Point(one.x + two.x, one.y + two.y);
}

inline Point operator*(const Point& point, const int mult)
{
	return Point(point.x * mult, point.y * mult);
}

inline std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "X: " << point.x << "\tY: " << point.y << endl;
	return out;
}

inline std::istream& operator>>(std::istream& in, Point& point)
{
	/*in >> point.x >> point.y;*/
	int tempX, tempY;
	in >> tempX >> tempY;
	point.x = tempX;
	point.y = tempY;
	return in;
}
