#include<iostream>
using namespace std;

class Retangle
{
private:
	double width;
	double height;
public:
	//��һ�����캯�����������������ֱ��ʾ��Ⱥ͸߶ȣ�����ʼ����Ӧ�ĳ�Ա����
	Retangle(double w,double h):width(w),height(h){}
	//�ڶ������캯��ֻ����һ����������ʾ�߳�����ʼ��Ϊ������(��Ⱥ͸߶����)
	Retangle(double side):width(side), height(side) {}

	double area()
	{
		return width * height;
	}
};

int main()
{
	double width, height;
	cout << "��������εĿ��: ";
	cin >> width;
	cout << "��������εĸ߶�: ";
	cin >> height;
	Retangle rec1(width, height);
	cout << "���ε������" << rec1.area() << endl;

	double side;
	cout << "�����������εı߳���";
	cin >> side;
	Retangle rec2(side);
	cout << "�����ε������" << rec2.area() << endl;

	return 0;
}