#include<iostream>
using namespace std;

class Circle
{
private:
	double radius;
public:
	Circle(double r) :radius(r) {}

	friend double calculateArea(Circle circle);//������Ԫ����
};

double calculateArea(Circle circle)
{
	double Pi = 3.14159;
	return Pi * circle.radius * circle.radius;
}

int main()
{
	double radius;
	cout << "������Բ�İ뾶��";
	cin >> radius;
	Circle circle(radius);
	cout << "Բ������ǣ�" << calculateArea(circle) << endl;

	return 0;
}