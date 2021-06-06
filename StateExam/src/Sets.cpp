#include "Sets.h"

#include <iostream>

#include <set>
#include <sstream>

using namespace std;

tuple<vector<string>, vector<string>> getSets(const vector<string>& words)
{
	set<string> vowelsWords;
	set<string> consonantsWords;
	string vowels = "aeiouy";

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

			if (vowels.find(tolower(static_cast<unsigned char>(tem[0]))) != string::npos)
			{
				vowelsWords.insert(move(tem));
			}
			else
			{
				consonantsWords.insert(move(tem));
			}
		}
	}

	return
	{
		vector<string>(vowelsWords.begin(), vowelsWords.end()),
		vector<string>(consonantsWords.begin(), consonantsWords.end())
	};
}
