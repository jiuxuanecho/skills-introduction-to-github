#include<iostream>
using namespace std;

class Library
{
private:
	static int bookCount;
public:
	Library(){}
	static void addBooks(int num) { bookCount += num; }
	static void removeBooks(int num)
	{
		if (bookCount >= num)
			bookCount -= num;
	}
	static int getBookCount() { return bookCount; }
};

int Library::bookCount = 0;

int main()
{
	Library book;
	int add, minus;
	cout << "������Ҫ���ӵ�ͼ��������";
	cin >> add;
	book.addBooks(add);
	cout << "����ͼ��������" << add << "������ǰ������" << book.getBookCount() << "��" << endl;
	cout << "������Ҫ���ٵ�ͼ��������";
	cin >> minus;
	book.removeBooks(minus);
	cout << "����ͼ��������" << minus << "������ǰ������" << book.getBookCount() << "��" << endl;
	cout << "��ǰͼ��������" << book.getBookCount() <<"��" << endl;

	return 0;
}