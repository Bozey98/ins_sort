#include <ins_sort.hpp>
#include <catch.hpp>
SCENARIO("sort","[sort]")
{
 	int matrix[6] = { 2 , 1, 6, 3, 5, 4 };
	int sorted_matrix[6] =  { 1, 2, 3, 4, 5, 6 };
	int* first = &matrix[0];
	int* second = &matrix[6];
	ins_sorting(first, second);
	bool check = NULL;
	for (int i = 0; i < 6; i++)
	if (matrix[i] == sorted_matrix[i])
	check = true;
	REQUIRE(check == true);
}

