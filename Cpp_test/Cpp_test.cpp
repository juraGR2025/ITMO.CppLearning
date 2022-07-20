// Cpp_test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <string> 
#include <windows.h>


using namespace std;

class Point
{
	friend ostream& operator<< (ostream&, const Point&);
	friend Point& operator+(const Point&, const Point&);
	friend Point& operator+(const Point&, const int&);
private:
	int x;
	int y;
public:
	Point() {}
	Point(int x, int y) : x(x), y(y) {}

	Point& operator+=(const Point& point) {
		x += point.x;
		y += point.y;
		return *this;
	}

};

ostream& operator<< (ostream& out, const Point& point)
{
	out << "(" << point.x << ", " << point.y << ")" << endl;
	return out;
}
Point& operator+(const Point& point1, const Point& point2) {
	Point add_two_points;
	add_two_points.x = point1.x + point2.x;
	add_two_points.y = point1.y + point2.y;
	return add_two_points;
}

Point& operator+(const Point& point, const int& a) {
	Point sum_with_a_const;
	sum_with_a_const.x = point.x + a;
	sum_with_a_const.y = point.y + a;
	return sum_with_a_const;
}

int main()
{
    Point pt1(1, 1), pt2(2, 2), pt3;
    pt3 = pt1 + pt2;
    pt2 += pt1;
    pt3 = pt1 + 5;
    cout << pt1 << pt2 << pt3;
}
