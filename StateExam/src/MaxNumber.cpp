#include "MaxNumber.h"

#include <string>
#include <algorithm>

using namespace std;

long long getMaxNumber(int first, int second)
{
	string tem = to_string(first) + to_string(second);

	sort(tem.begin(), tem.end(), greater<char>());

	return stoll(tem);
}
