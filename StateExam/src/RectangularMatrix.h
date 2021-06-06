#pragma once

#include <vector>
#include <tuple>

struct ResultData
{
	std::vector<uint32_t> row;
	uint64_t sum;
};

/*
Составить программу, которая решает следующую задачу:
Ввести прямоугольную матрицу из случайных чисел случайных размеров. Найти строку с наибольшей и наименьшей суммой элементов.
Вывести на экран найденные строки и суммы их элементов.
///
Минимум - максимум
*/
std::tuple<ResultData, ResultData> solveRectangularMatrix(const std::vector<std::vector<uint32_t>>& customMatrix = std::vector<std::vector<uint32_t>>());
