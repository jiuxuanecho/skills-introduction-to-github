#include<iostream>
using namespace std;

class Point
{
private:
	double x;
	double y;
public:
	Point(double x_axis,double y_axis):x(x_axis),y(y_axis){}

	Point(const Point& other) :x(other.x), y(other.y)
	{
		cout << "拷贝构造函数被调用" << endl;
	}

	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	double x, y;
	cout << "请输入点的x坐标：";
	cin >> x;
	cout << "请输入点的y坐标：";
	cin >> y;
	Point point1(x, y);
	cout << "原始点：" << "点的坐标：";
	point1.display();
	Point point2(point1);
	cout << "拷贝的点：" << "点的坐标：";
	point2.display();

	return 0;
}