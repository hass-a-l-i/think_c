#include "include.h"

/*
Write a function named shuffle, that takes an array as an argument and randomly “shuffles” the elements in the array. You can create two versions of this function, one that is a modifier and one that is a pure function.
*/

int array_1[10];

int create_array(int array[10], int lower, int upper)
{
	// make 10 random numbers between 0 and 100 and fill array with them
	for (int i = 0; i < 10; i = i + 1)
	{
		int divider = upper - lower + 1; // + 1 to deal with 0 = translate to min = 1
		int rand_no = (rand() % divider) + lower;
		array[i] = rand_no;
	}
	return array[10];
}

void print_array(int array[10], int size)
{
	int i = 0;
	while (i < size)
	{
		cout << array[i] << endl;
		i = i + 1;
	}
}

void shuffle(int array[10])
{
	vector<int> vec_1 (10);
	for (int i = 0; i < 10; i = i + 1)
	{
		vec_1[i] = i;
	}
	random_shuffle(vec_1.begin(), vec_1.end());
	
	int array2[10];
	for (int i = 0; i < 10; i = i + 1)
	{
		array2[i] = array[i];
	}

	for (int i = 0; i < 10; i = i + 1)
	{
		int rand_position = vec_1[i];
		array[i] = array2[rand_position];
	}
}

int main()
{
	create_array(array_1, 0, 100);
	cout << "pre shuffled array:" << endl;
	print_array(array_1, 10);
	shuffle(array_1);
	cout << "post shuffled array:" << endl;
	print_array(array_1, 10);
}