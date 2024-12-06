#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
	char title[20];
	char author[20];
	unsigned int pages;
public:
	Book(const char* t, const char* a, const unsigned int p)
	{
		strcpy_s(title, t);
		strcpy_s(author, a);
		pages = p;
	}
	void display()
	{
		cout << "����: " << title << endl;
		cout << "����: " << author << endl;
		cout << "ҳ��: " << pages << endl;
	}
};

int main()
{
	char title[20];
	char author[20];
	unsigned int pages;

	cout << "������������";
	cin.getline(title, 20);
	cout << "���������ߣ�";
	cin.getline(author, 20);
	cout << "������ҳ����";
	cin >> pages;

	Book mybook(title, author, pages);
	mybook.display();

	return 0;
}