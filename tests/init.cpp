#include <ins_sort.hpp>
#include <catch.hpp>
SCENARIO("sort","[sort]")
{
 	int matrix[3] = { 1,3,0};
	int sorted_matrix[3] =  { 0,1,3 };
	int* first = &matrix[0];
	int* second = &matrix[3];
	ins_sorting(first, second);
	bool check = NULL;
	for (int i = 0; i < 3; i++)
	if (matrix[i] == sorted_matrix[i])
	check = true;
	REQUIRE(check == true);
}

