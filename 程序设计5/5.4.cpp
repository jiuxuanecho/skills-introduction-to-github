#include<iostream>
using namespace std;

class Circle
{
private:
	double radius;
public:
	Circle(double r) :radius(r) {}

	friend double calculateArea(Circle circle);//声明友元函数
};

double calculateArea(Circle circle)
{
	double Pi = 3.14159;
	return Pi * circle.radius * circle.radius;
}

int main()
{
	double radius;
	cout << "请输入圆的半径：";
	cin >> radius;
	Circle circle(radius);
	cout << "圆的面积是：" << calculateArea(circle) << endl;

	return 0;
}