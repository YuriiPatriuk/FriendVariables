#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using std::cout;
using std::endl;

int main()
{
    Point point1(1,-4);
    Point point2(6,9);
    point1.print();
    point2.print();
    
    cout << "Distance: " << calcDistance(point1, point2) << endl;
    
    Rectangle rect;
    rect.print();
    cout << "Area: " << rect.area() << endl;

    Rectangle rect2(1, 1, 3, 3);
    rect2.print();
    cout << "Area: " << rect2.area() << endl;
    
    Rectangle rect3(Point{ -1,-1 }, Point( 4,4 ));
    rect3.print();
    cout << "Area: " << rect3.area() << endl;

    Point point3 = point1 + point2;
    point3.print();
    cout << "point3 * 3" << endl;
    (point3 * 3).print();

    cout << "Test: " << endl;
    cout << point3 << endl;
    std::cin >> point3;
    point3.print();


    return 0;
}
