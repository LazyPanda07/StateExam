#include "RectangularMatrix.h"

#include <random>
#include <ctime>

using namespace std;

tuple<ResultData, ResultData> solveRectangularMatrix(const vector<vector<uint32_t>>& customMatrix)	// tuple �������� ������ ���������� ��� ������ � ����� ��������
{
	mt19937 random(time(nullptr));
	vector<vector<uint32_t>> generatedMatrix;

	if (customMatrix.empty())
	{
		generatedMatrix = vector<vector<uint32_t>>(random() % 1000, vector<uint32_t>(random() % 1000));

		for (size_t i = 0; i < generatedMatrix.size(); i++)
		{
			for (size_t j = 0; j < generatedMatrix[i].size(); j++)
			{
				generatedMatrix[i][j] = random();
			}
		}
	}

	const vector<vector<uint32_t>>& matrix = customMatrix.empty() ?	// ������� ����� ��������� ������� ��� ������������ ���������, ����� ���������� ����� ����� ������������, ���� ������� �������� ������, �� ������������ ���������������, ����� ��������
		generatedMatrix :
		customMatrix;

	uint64_t min = numeric_limits<uint64_t>::max();	// ��� ������, u - unsigned(�����������) int64 - integer 64 bit(����� 64 ���� - 8 ����)
	uint64_t max = numeric_limits<uint64_t>::min();
	size_t minRow = 0;
	size_t maxRow = 0;

	for (size_t i = 0; i < matrix.size(); i++)
	{
		uint64_t sum = 0;

		for (size_t j = 0; j < matrix[i].size(); j++)
		{
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
