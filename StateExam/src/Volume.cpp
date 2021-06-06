#include "Volume.h"

#include <iostream>
#include <format>

using namespace std;

uint64_t getCount()
{
	int v;
	uint64_t result = 0;

	cin >> v;

	for (size_t i = 1; i <= v; i++)
	{
		for (size_t j = 1; j <= v; j++)
		{
			for (size_t k = 1; k <= v; k++)
			{
				if (i * j * k == v)
				{
					result++;
				}
			}
		}
	}

	return result;
}
