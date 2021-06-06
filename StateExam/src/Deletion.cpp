#include "Deletion.h"

using namespace std;

string getStringAfterDeletion(string numbers)
{
	auto getIndex = [](const string& stringToCheck) -> size_t
	{
		for (size_t i = 0; i < stringToCheck.size() - 1; i++)
		{
			if (stringToCheck[i] == stringToCheck[i + 1])
			{
				return i;
			}
		}

		return static_cast<size_t>(-1);
	};

	while (true)
	{
		size_t nextIndex = getIndex(numbers);

		if (nextIndex == string::npos)
		{
			return numbers;
		}

		numbers.erase(numbers.begin() + nextIndex);
	}
}
