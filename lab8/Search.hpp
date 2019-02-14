#ifndef SEARCH_HPP
#define SEARCH_HPP
#include <vector>
using std::vector;

class Search
{
public:
	int simpleSearch(vector <int> &v, int sz, int target_value);

	int binarySearch(vector <int> &v, int sz, int target_value);
	

};
#endif