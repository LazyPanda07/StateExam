#include "Intersection.h"

#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> intersection(const string& first, const string& second)
{
	set<string> firstSet;
	set<string> secondSet;
	auto splitWords = [](const string& str, set<string>& result)
	{
		stringstream wordSplitter;

		wordSplitter << str;

		while (!wordSplitter.eof())
		{
			string word;

			wordSplitter >> word;

			while (isspace(static_cast<unsigned char>(word.back())))
			{
				word.pop_back();
			}

			if (word.empty())
			{
				continue;
			}

			result.insert(move(word));
		}
	};
	vector<string> result;

	splitWords(first, firstSet);

	splitWords(second, secondSet);

	set_intersection(firstSet.begin(), firstSet.end(), secondSet.begin(), secondSet.end(), back_inserter(result));

	return result;
}
