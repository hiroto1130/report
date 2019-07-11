#include <iostream>

int cout;

void subtraction(int a,int b)
{
	using ::cout ;
	::cout = a - b;
}

void print()
{
	using std::cout ;

    cout << "表示：" << ::cout ;

}

int main()
{
	subtraction(7,9);
	print();
	return 0;
}