#include<iostream>
using namespace std;

class Retangle
{
private:
	double width;
	double height;
public:
	//第一个构造函数接受两个参数，分别表示宽度和高度，并初始化相应的成员变量
	Retangle(double w,double h):width(w),height(h){}
	//第二个构造函数只接受一个参数，表示边长，初始化为正方形(宽度和高度相等)
	Retangle(double side):width(side), height(side) {}

	double area()
	{
		return width * height;
	}
};

int main()
{
	double width, height;
	cout << "请输入矩形的宽度: ";
	cin >> width;
	cout << "请输入矩形的高度: ";
	cin >> height;
	Retangle rec1(width, height);
	cout << "矩形的面积：" << rec1.area() << endl;

	double side;
	cout << "请输入正方形的边长：";
	cin >> side;
	Retangle rec2(side);
	cout << "正方形的面积：" << rec2.area() << endl;

	return 0;
}