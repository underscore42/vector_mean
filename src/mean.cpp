/*
mean of a vector (series of numbers)

Steven MacDonald macdsteven@gmail.com

Some GPL or public license would go here, from the legal department. 2020.
*/

/*
Notes:
*/

#include <vector>
#include <numeric>

#include "mean.h"

using namespace std;

float mean(vector<float> v)
{
	float mean=0.0;

	if (v.size()!=0){
		mean = accumulate (v.begin(), v.end(), static_cast<float>(0.0)) / v.size();
	}
	return mean;
}
