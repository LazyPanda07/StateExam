#include "RectangularMatrix.h"

#include <random>
#include <ctime>

using namespace std;

tuple<ResultData, ResultData> solveRectangularMatrix(const vector<vector<uint32_t>>& customMatrix)
{
	mt19937 random(time(nullptr));

	vector<vector<uint32_t>> matrix = customMatrix.empty() ?
		vector<vector<uint32_t>>(random() % 1000, vector<uint32_t>(random() % 1000)) :
		customMatrix;

	uint64_t min = numeric_limits<uint64_t>::max();
	uint64_t max = numeric_limits<uint64_t>::min();
	size_t minRow = 0;
	size_t maxRow = 0;

	for (size_t i = 0; i < matrix.size(); i++)
	{
		uint64_t sum = 0;

		for (size_t j = 0; j < matrix[i].size(); j++)
		{
			if (customMatrix.empty())
			{
				matrix[i][j] = random();
			}

			sum += matrix[i][j];
		}

		if (sum > max)
		{
			max = sum;

			maxRow = i;
		}
		
		if (sum < min)
		{
			min = sum;

			minRow = i;
		}
	}

	return 
	{
		{ matrix[minRow], min },
		{ matrix[maxRow], max }
	};
}
