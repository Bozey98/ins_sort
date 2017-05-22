#include <vector>
#include <iostream>

using namespace std;
template <typename Iterator>
void ins_sorting(Iterator start, Iterator end)
{
	if (start >= end)
		return;
	for (Iterator i = start + 1; i != end; ++i)
	
		for (Iterator j = i; j != start && *j < *(j - 1); --j)
		
			iter_swap(j - 1, j);
		
}
