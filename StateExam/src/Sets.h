#pragma once

#include <vector>
#include <string>

/*
��������� ���������, �������� ��������� ������:
������� ����� �������� ���� ��� ��������� ����� �� ����(���������� ��������� ������������������� �������� ���� ���������� ��������).
������� ��� �� ��� ������ ����: ������������ �� ������� ����� (aeiouy) � ���������.
������� ���������� ������ � ���������� �������.
///
������� - ���������
*/
std::tuple<std::vector<std::string>, std::vector<std::string>> getSets(const std::vector<std::string>& words);