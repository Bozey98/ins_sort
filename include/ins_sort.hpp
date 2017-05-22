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
int main()
{
	vector <int> test;
	for (int i = 0; i < 10; i++) {
		test.push_back(rand() % 100);
		cout << test[i] << "  ";
	}

	cout << endl;

	ins_sorting(test.begin(), test.end());

	for (int i = 0; i < 10; i++) {
		cout << test[i] << "  ";
	}

	system("pause");
    return 0;
}

