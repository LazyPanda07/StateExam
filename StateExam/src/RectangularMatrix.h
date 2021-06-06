#pragma once

#include <vector>
#include <tuple>

struct ResultData
{
	std::vector<uint32_t> row;
	uint64_t sum;
};

/*
��������� ���������, ������� ������ ��������� ������:
������ ������������� ������� �� ��������� ����� ��������� ��������. ����� ������ � ���������� � ���������� ������ ���������.
������� �� ����� ��������� ������ � ����� �� ���������.
///
������� - ��������
*/
std::tuple<ResultData, ResultData> solveRectangularMatrix(const std::vector<std::vector<uint32_t>>& customMatrix = std::vector<std::vector<uint32_t>>());
