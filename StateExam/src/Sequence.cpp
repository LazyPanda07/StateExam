#include "Sequence.h"

#include <iterator>

using namespace std;

vector<int> getNewArray(const vector<int>& array)
{
	vector<int> result;
	vector<int> negative;

	for (const auto& i : array)
	{
		if (i >= 0)
		{
			result.push_back(i);
		}
		else
		{
			negative.push_back(i);
		}
	}

	copy(negative.begin(), negative.end(), back_inserter(result));	// в result уже содержатся неотрицательные числа и дальше происходит копирование всех отрицательных чисел, back_inserter дает доступ к месту для вставления элемента в конец

	return result;
}
