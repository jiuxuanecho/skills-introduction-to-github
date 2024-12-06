#include<iostream>
using namespace std;

class Temperature
{
private:
	double celsius;
public:
	Temperature(double t):celsius(t){}

	double getCelsius() const { return celsius; }
	double toFahrenheit()const
	{
		double fahrenheit = celsius * 9 / 5 + 32;
		return fahrenheit;
	}
};

int main()
{
	double celsius;
	cout << "�����������¶ȣ�";
	cin >> celsius;
	Temperature t(celsius);
	cout << "�����¶ȣ�" << t.getCelsius() << "��C" << endl;
	cout << "�����¶ȣ�" << t.toFahrenheit() << "��F" << endl;

	return 0;
}