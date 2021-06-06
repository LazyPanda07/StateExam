#include "ChangePosition.h"

#include <iostream>

using namespace std;

vector<string> changePosition()
{
	vector<string> result;
	string value;

	while (cin >> value)
	{
		swap(value.front(), value.back());

		result.push_back(value);
	}

	return result;
}
