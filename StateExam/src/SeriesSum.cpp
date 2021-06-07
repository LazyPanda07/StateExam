#include "SeriesSum.h"

#include <cmath>

using namespace std;

double getSeriesSum()
{
	static constexpr double accuracy = 0.00001;	// constexpr показывает, что эта переменная будет проинициализирована в момент компиляции, т.е. в .exe файле уже будет эта переменная с этим значением
	int n = 1;
	double u = n / (pow(n, 2) + 1);
	double result = u;

	while (u > accuracy)
	{
		n++;

		u = n / (pow(n, 2) + 1);

		result += u;
	}

	return result;
}
