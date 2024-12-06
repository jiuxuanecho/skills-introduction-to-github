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
		cout << "书名: " << title << endl;
		cout << "作者: " << author << endl;
		cout << "页数: " << pages << endl;
	}
};

int main()
{
	char title[20];
	char author[20];
	unsigned int pages;

	cout << "请输入书名：";
	cin.getline(title, 20);
	cout << "请输入作者：";
	cin.getline(author, 20);
	cout << "请输入页数：";
	cin >> pages;

	Book mybook(title, author, pages);
	mybook.display();

	return 0;
}