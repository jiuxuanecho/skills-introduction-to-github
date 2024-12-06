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
	cout << "ÇëÊäÈëÉãÊÏÎÂ¶È£º";
	cin >> celsius;
	Temperature t(celsius);
	cout << "ÉãÊÏÎÂ¶È£º" << t.getCelsius() << "¡ãC" << endl;
	cout << "»ªÊÏÎÂ¶È£º" << t.toFahrenheit() << "¡ãF" << endl;

	return 0;
}