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
		cout << "�������캯��������" << endl;
	}

	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	double x, y;
	cout << "��������x���꣺";
	cin >> x;
	cout << "��������y���꣺";
	cin >> y;
	Point point1(x, y);
	cout << "ԭʼ�㣺" << "������꣺";
	point1.display();
	Point point2(point1);
	cout << "�����ĵ㣺" << "������꣺";
	point2.display();

	return 0;
}