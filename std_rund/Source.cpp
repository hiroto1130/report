#include <random>
#include <iostream>

int main()
{
	std::mt19937 mt{ std::random_device{}()};

	std::uniform_int_distribution<int> a(1, 6);

	for (int i = 0; i != 10; ++i)
	{
		
		std::cout << a(mt) << std::endl;

	}
}