#include "Words.h"

#include <set>
#include <sstream>

using namespace std;

tuple<vector<string>, vector<string>> getWords(const vector<string>& words)
{
	set<string> shortWords;
	set<string> longWords;
	vector<string> allWords;
	size_t lengthSum = 0;
	size_t wordsCount = 0;
	double midLength = 0.0;

	for (const auto& i : words)
	{
		stringstream wordsSplitter;

		wordsSplitter << i;

		while (!wordsSplitter.eof())
		{
			string tem;

			wordsSplitter >> tem;

			while (tem.size() && isspace(static_cast<unsigned char>(tem.back())))
			{
				tem.pop_back();
			}

			if (tem.empty())
			{
				continue;
			}

			lengthSum += tem.size();

			wordsCount++;

			allWords.push_back(move(tem));
		}
	}

	midLength = static_cast<double>(lengthSum) / wordsCount;

	for (auto& i : allWords)
	{
		if (i.size() >= midLength)
		{
			longWords.insert(move(i));
		}
		else
		{
			shortWords.insert(move(i));
		}
	}

	return
	{
		vector<string>(shortWords.begin(), shortWords.end()),
		vector<string>(longWords.begin(), longWords.end())
	};
}
