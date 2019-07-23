#include <vector>
#include <stdio.h>
#include <iostream>
#include <random>
#include <iostream>


int main()
{
	std::mt19937 mt{ std::random_device{}() };
	std::uniform_int_distribution<int> a(1, 6);
	std::uniform_int_distribution<int> e(1, 10);
	std::vector<int> vi(10);

	// 代入
	for (int i = 0; i < 10; i++)
	{
		vi[i] = a(mt);
	}

	std::cout << vi[e(mt)] << std::endl;
}