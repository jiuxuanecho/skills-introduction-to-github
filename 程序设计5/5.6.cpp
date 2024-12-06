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
	cout << "请输入要增加的图书数量：";
	cin >> add;
	book.addBooks(add);
	cout << "增加图书数量：" << add << "本，当前总数：" << book.getBookCount() << "本" << endl;
	cout << "请输入要减少的图书数量：";
	cin >> minus;
	book.removeBooks(minus);
	cout << "减少图书数量：" << minus << "本，当前总数：" << book.getBookCount() << "本" << endl;
	cout << "当前图书数量：" << book.getBookCount() <<"本" << endl;

	return 0;
}