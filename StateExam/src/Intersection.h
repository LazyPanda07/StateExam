#pragma once

#include <vector>
#include <string>

/*
Составить программу, которая решает следующую задачу.
В двух строках даны два набора слов (последовательностей символов, разделённых пробелами).
Вывести в алфавитном порядке без повторов набор слов, встречающихся в обоих исходных наборах.
*/
std::vector<std::string> intersection(const std::string& first, const std::string& second);
